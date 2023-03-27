class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);           //TC = O(N) or amortised O(1) , SC = O(2N)
    }
    
    int pop() {
        int ans;
        if(!output.empty()){
            ans = output.top();
            output.pop();
            return ans;
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            ans = output.top();
            output.pop();
            return ans;
        }
    }
    
    int peek() {
        if(!output.empty()){
            return output.top();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }
    
    bool empty() {
        if(output.empty() && input.empty())
            return 1;
        else
            return 0;
    }
};

//1. Using 2 stacks:      (EASY TO IMPLEMENT **** Practice it)

//     stack<int> s1;
//     stack<int> s2;
    
//     MyQueue() {
        
//     }
    
//     void push(int x) {                   //Using 2 stacks: ---> TC = O(N) , SC = O(2N)
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
        
//         s1.push(x);
        
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
    
//     int pop() {
//         int ans = s1.top();
//         s1.pop();
//         return ans;
//     }
    
//     int peek() {
//         return s1.top();
//     }
    
//     bool empty() {
//         if(s1.empty())
//             return 1;
//         else
//             return 0;
//     }

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */