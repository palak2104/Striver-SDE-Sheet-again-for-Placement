#include<bits/stdc++.h>
int histo(vector<int>arr){
    int n=arr.size();
    vector<int>right(n),left(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
    while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
    if(st.empty()) right[i]=n;
    else right[i]=st.top();
    st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i=0;i<n;i++){
    while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
    if(st.empty()) left[i]=-1;
    else left[i]=st.top();
    st.push(i);
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
    maxi=max(maxi,(right[i]-left[i]-1)*arr[i]);    
    }
    return maxi;
    }
int maximalAreaOfSubMatrixOfAll1(vector<vector<int>>&arr, int n, int m){
	// Write your code here.
    n=arr.size();
    m=arr[0].size();
    vector<int>dp(m,0);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1) dp[j]+=1;
                else dp[j]=0;
            }
        maxi=max(maxi,histo(dp));
        }
        return maxi;
}
