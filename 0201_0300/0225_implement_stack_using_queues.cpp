class MyStack {
private:
    std::queue<int> q;
    
public:
    MyStack() {
            
    }
    
    void push(int x) {
        q.push(x);
        
        // move all values except last inserted behind last inserted value
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int elt = top();
        q.pop();
        return elt;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */