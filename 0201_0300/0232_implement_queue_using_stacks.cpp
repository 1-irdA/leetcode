class MyQueue {
private:
    std::stack<int> s1;
    std::stack<int> s2;

public:
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while (s1.size() > 1) {
            s2.push(s1.top());
            s1.pop();
        }
        int removed = s1.top();
        s1.pop();

        while(s2.size() > 0) {
            s1.push(s2.top());
            s2.pop();
        }
        return removed;
    }
    
    int peek() {
        while (s1.size() > 1) {
            s2.push(s1.top());
            s1.pop();
        }
        int top = s1.top();

        while(s2.size() > 0) {
            s1.push(s2.top());
            s2.pop();
        }
        return top;
    }
    
    bool empty() {
        return s1.empty();
    }
};