class MinStack {
    stack<pair<int, int>> mpp;
public:
    MinStack() {}
    
    void push(int val) {
        int m;
        if(mpp.empty()){
            m = val;
        }
        else{
           m = min(val, mpp.top().second);
        }
        mpp.push({val, m});
    }
    
    void pop() {
        mpp.pop();
    }
    
    int top() {
        return mpp.top().first;
    }
    
    int getMin() {
       return mpp.top().second;
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