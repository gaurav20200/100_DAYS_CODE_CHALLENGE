class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int prod=1;
        int zeroes=0;
        
        for(auto it:nums){
            prod*=it;
            zeroes+=(it==0);
        }
          if(zeroes>1){
            return ans;
        }
        if(zeroes==1){
            prod=1;
            for(auto it:nums){
                if(it==0)continue;
                prod*=it;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(zeroes==1){
                if(nums[i]==0)ans[i]=prod;
                continue;
            }
            ans[i]=prod/nums[i];
        }
        return ans;
    }
};