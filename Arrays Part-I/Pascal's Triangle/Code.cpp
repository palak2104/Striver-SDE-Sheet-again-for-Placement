class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>fres;
        vector<int>res(1,1);
        fres.push_back(res);
        for(int i=1;i<n;i++){
            vector<int>temp(i+1);
            for(int j=0;j<=i;j++){
                if(j==0){
                    temp[j]=res[j];
                }
                else if(j==i){
                    temp[j]=res[j-1];
                }
                else{
                   temp[j]=res[j]+res[j-1]; 
                }
            }
            res.resize(i+1);
            res=temp;
            fres.push_back(res);
        }
        return fres;
    }
};
