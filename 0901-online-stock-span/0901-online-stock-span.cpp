class StockSpanner {
public:
    stack<pair<int,int>> s;
    int index;
    
    StockSpanner() {                //TC = O(N) , SC = O(N)
        index = -1;
    }
    
    int next(int price) {
        index++;
        while(!s.empty() && s.top().second <= price){    //find the previous greater element
            s.pop();
        }
        
        if(s.empty()){             //if there is no previous greater element
            s.push({index,price});
            return index+1;
        }
        
        int result = s.top().first;
        s.push({index,price});
        
        return index - result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */