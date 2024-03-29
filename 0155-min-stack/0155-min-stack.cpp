class MinStack {
public:
    stack<pair<int,int>> s;          //TC = O(1) , SC = O(2N)
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(!s.empty()){
            s.push({val,min(val, s.top().second)});
        }
        else{
            s.push({val,val});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */