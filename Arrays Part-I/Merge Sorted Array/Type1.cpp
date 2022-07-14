class Solution {
public:
    void merge(vector<int>&a, int m, vector<int>&b, int n) {
        if(n==0) return;
        if(m==0){
            for(int i=0;i<n;i++){
                a[i]=b[i];
            }
            return;
        }
        for(int i=0;i<m;i++){
            if(a[i]>b[0]){
            swap(a[i],b[0]);
            int j;
            int x=b[0];
            for(j=1;j<n && x>b[j];j++){
            b[j-1]=b[j];    
            }
            b[j-1]=x;
            }
        }
        for(int i=0;i<n;i++){
           a[m+i]=b[i];
        }
    }
};
