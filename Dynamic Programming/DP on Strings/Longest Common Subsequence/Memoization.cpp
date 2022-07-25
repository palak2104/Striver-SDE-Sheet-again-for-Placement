class Solution {
    int func(int i,int j,string str1,string str2,vector<vector<int>>&dp){
        if(j==0 || i==0) return 0;
        if(j==0 && i==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int res=0;
        if(str1[i-1]==str2[j-1])
        res=1+func(i-1,j-1,str1,str2,dp);
        else{
            res=max(func(i-1,j,str1,str2,dp),func(i,j-1,str1,str2,dp));
         }
        return dp[i][j]=res;
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(n,m,text1,text2,dp);
    }
};
