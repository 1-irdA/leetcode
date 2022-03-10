class MinStack {
private:
    vector<int> values;
    vector<int>::iterator it;
    int min;
    
public:
    MinStack() {  
        values.clear();
    }
    
    void push(int val) {
        if (values.empty()) {
            min = val;
        } else {
            min = val < min ? val : min;
        }
        values.push_back(val);
    }
    
    void pop() {
        if (values.empty()) {
            throw;
        }  
        int last = values.back();
        values.pop_back();
        
        if (min == last) {
            it = min_element(values.begin(), values.end());
            min = values[distance(values.begin(), it)];
        } 
    }
    
    int top() {
        if (values.empty()) {
            throw;
        }
        return values.back();
    }
    
    int getMin() {
        if (values.empty()) {
            throw;
        }
        return min;
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