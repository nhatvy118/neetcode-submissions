class MinStack {
private:
    vector<int> minStack;
    vector<int> st;
public:
    MinStack() {
        minStack.resize(0);
        st.resize(0);
    }
    
    void push(int val) {
       st.push_back(val);
       if (minStack.empty() || val <= minStack.back()){
            minStack.push_back(val);
       }
    }
    
    void pop() {
        if (st.empty()){
            return;
        }
        if (st.back() == minStack.back()){
            st.pop_back();
            minStack.pop_back();
        }else{
            st.pop_back();
        }
    }
    
    int top() {
        if (st.empty()){
            return -1;
        }
        return st.back();
    }
    
    int getMin() {
        if (minStack.empty()){
            return -1;
        }
        return minStack.back();
    }
};
