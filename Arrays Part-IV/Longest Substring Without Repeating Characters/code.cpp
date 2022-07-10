class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int maxi=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=i;
                count++;
            }
            else{
                count=min(count+1,i-m[s[i]]);
                m[s[i]]=i;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
