class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        for(int i=0;i+1<n;){
           int j=i;
            while(j+1<n&&prices[j]<prices[j+1]){
                j++;
            }
            ans+= (prices[j]-prices[i]);
            i=j+1;
        }
        return ans;
    }
};