class MyStack {
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int n=q.size()-1;
        while(n--){
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return (q.size()==0);
    }
};
