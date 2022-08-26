class MyQueue {
    stack<int>i,o;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        i.push(x);
    }
    
    int pop() {
    if(!o.empty()){
        int x=o.top();
        o.pop();
        return x;
    }
    else{
        while(!i.empty()){
            o.push(i.top());
            i.pop();
        }
    int x=o.top();
    o.pop();
    return x;
    }
    }
    
    int peek() {
    if(!o.empty()){
        return o.top();
    }
    else{
        while(!i.empty()){
            o.push(i.top());
            i.pop();
        }
    return o.top();
    }
    }
    
    bool empty() {
        return (i.empty() && o.empty());
    }
};
