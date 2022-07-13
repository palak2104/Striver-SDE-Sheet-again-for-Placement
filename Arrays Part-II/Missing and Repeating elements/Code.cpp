#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        long long int a=(n*(n+1))/2;
        long long int b=(n*(n+1)*(2*n+1))/6;
        for(int i=0;i<n;i++){
        int it=arr[i];
        a-=(long long int)it;
        b-=((long long int)it*(long long int)it);
        }
        long long int missing=(a+(b/a))/2;
	    long long int repeating=(b/a)-missing;
	    int *res=new int[2];
	    res[0]=repeating;
	    res[1]=missing;
	    return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  
