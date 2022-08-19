class Solution{
    bool static comp(int a,int b){
        return (a>b);
    }
	public:
	int minCoins(int coins[], int n, int V) 
	{ 
	    // Your code goes here
	    sort(coins,coins+n,comp);
	    int count=0;
	    for(int i=0;i<n;i++){
	        while(V>=coins[i]){
	            V-=coins[i];
	            count++;
	        }
	        cout<<V<<" "<<count;
	    }
	    return count;
	} 
	  
};
