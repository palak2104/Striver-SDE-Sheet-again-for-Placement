#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.length();
        int m=b.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               int res=0;
               if(a[i-1]==b[j-1])
               res=1+dp[i-1][j-1];
               else{
               res=max(dp[i][j-1],dp[i-1][j]);
               }
            dp[i][j]=res; 
            }
        }
    int i=n;
    int j=m;
    string str;
    while(dp[i][j]){
        if(a[i-1]==b[j-1]){
            str.push_back(a[i-1]);
            i=i-1;
            j=j-1;
        }
        else if(dp[i-1][j]>=dp[i][j-1]) i=i-1;
        else j=j-1;
    }
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}
