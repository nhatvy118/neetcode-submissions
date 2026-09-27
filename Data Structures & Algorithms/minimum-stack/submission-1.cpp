class MinStack {
private:
    stack<int> minStack;
    stack<int> st;
public:
    MinStack() {
        st = stack<int>();
        minStack = stack<int>();
    }
    
    void push(int val) {
        st.push(val);
        if (minStack.empty()){
            minStack.push(val);
            return;
        }
        if (val <= minStack.top()){
            minStack.push(val);
        }
    }
    
    void pop() {
        if (st.empty()){
            return;
        }
        if (st.top() == minStack.top()){
            st.pop();
            minStack.pop();
        }else{
            st.pop();
        }
    }
    
    int top() {
        if (st.empty()){
            return -1;
        }
        return st.top();
    }
    
    int getMin() {
        if (minStack.empty()){
            return -1;
        }
        return minStack.top();
    }
};