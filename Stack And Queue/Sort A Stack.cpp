#include <bits/stdc++.h>

using namespace std;
void sort(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    sort(st);
    stack<int>arr;
    while(!st.empty() && st.top()<x){
        arr.push(st.top());
        st.pop();
    }
    st.push(x);
    while(!arr.empty()){
        st.push(arr.top());
        arr.pop();
    }
}
int main()
{
    int n;
    cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    sort(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
