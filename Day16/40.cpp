class Solution {   //will take more time 
public:
    int jump(vector<int>& nums) {
        int n=nums.size();  
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=min(nums[0],n-1);i++){
            dp[i]=1;
        }
        for(int i=1;i<n;i++){
         for(int j=1;j<=1000;j++){
             if(i>=j){
                 if(i-j+nums[i-j]>=i){
                     dp[i]=min(dp[i],1+dp[i-j]);
                 }
             }
         }            
        }
        return dp[n-1];
    }
};
class Solution { //from last index to first index
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,100000);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            for(int j=i;j<=min(i+nums[i],n-1);j++){
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
        return dp[0];
    }
};