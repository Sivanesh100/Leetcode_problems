class MinStack {
public:
    stack<int> min_stack;
    stack<int> stack;
    MinStack() {

    }

    void push(int val) {
        stack.push(val);
        if(min_stack.empty()) 
        {
            min_stack.push(val);
        } 
        else 
        {
            min_stack.push(std::min(val, min_stack.top()));
        }
    }

    void pop() {
        min_stack.pop();
        stack.pop();
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return min_stack.top();
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
