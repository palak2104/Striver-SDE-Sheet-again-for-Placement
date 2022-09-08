class Solution {
public:
    int maxProfit(vector<int>& price) {
        int maxi=INT_MIN;
        int max_price=INT_MIN;
        for(int i=price.size()-1;i>=0;i--){
        if(price[i]>max_price) max_price=max(max_price,price[i]);
        else maxi=max(maxi,max_price-price[i]);
        }
        return maxi==INT_MIN?0:maxi;
    }
};
