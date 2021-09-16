class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mini=INT_MAX,maxi=INT_MIN;
        int n=prices.size();
        int a[n];
        for(int i=n-1;i>=0;i--){
            maxi=max(prices[i],maxi);
            a[i]=maxi;
        }
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            ans=max(ans,a[i]-mini);
        }
        return ans;
    }
};