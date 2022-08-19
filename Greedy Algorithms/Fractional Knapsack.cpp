class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    bool static comp(Item a,Item b){
        double x=(double)a.value/(double)a.weight;
        double y=(double)b.value/(double)b.weight;
        return (x>y);
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        double profit=0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<=W){
                profit+=arr[i].value;
                W=W-arr[i].weight;
            }
            else{
                double x=(double)W*((double)arr[i].value/(double)arr[i].weight);
                profit+=x;
                break;
            }
        }
        return profit;
    }
        
};
