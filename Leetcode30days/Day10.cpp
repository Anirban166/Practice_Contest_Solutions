class MinStack {
    stack<pair<int,int>> sp;
public:
    MinStack() {}
    
    void push(int x) 
    {
        if(sp.empty())
        sp.push({x,x});
        else
            sp.push({x,min(sp.top().second,x)});
    }
    
    void pop() {
        sp.pop();
    }
    
    int top() {
        return sp.top().first;
    }
    
    int getMin() {
        return sp.top().second;
    }
};
