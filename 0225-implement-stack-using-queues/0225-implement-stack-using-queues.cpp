class MyStack {
public:
    queue<int> q1;           //using a single queue : ---->   TC = O(N) ,SC = O(N)
    
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        
        for(int i=0;i<q1.size()-1;i++){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())
            return 1;
        else
            return 0;
    }
};


//1. Using 2 queues:


//  queue<int> q1;           //using 2 queues : ---->   TC = O(N) ,SC = O(N)
//     queue<int> q2;
    
//     MyStack() {
        
//     }
    
//     void push(int x) {
//         q2.push(x);
        
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }
        
//         swap(q1,q2);
//     }
    
//     int pop() {
//         int ans = q1.front();
//         q1.pop();
//         return ans;
//     }
    
//     int top() {
//         return q1.front();
//     }
    
//     bool empty() {
//         if(q1.empty())
//             return 1;
//         else
//             return 0;
//     }










/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */