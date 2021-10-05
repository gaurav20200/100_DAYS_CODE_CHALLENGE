class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         int n=nums.size();
         vector<vector<int>>ans;
         map<vector<int>,int>mp;
         sort(nums.begin(),nums.end());
         for(int i=0;i+3<n;i++){
             if(i>0&&nums[i]==nums[i-1])continue;    // to avoid duplicate
          for(int j=i+1;j+2<n;j++){
            if(j>i+1&&nums[j]==nums[j-1])continue;   // to avoid duplicate
              int req=target-nums[i]-nums[j];
           int k=j+1,l=n-1;
              while(k<l){
                  if(req>nums[k]+nums[l]){
                      k++;
                  }else if(req<nums[k]+nums[l]){
                      l--;
                  }else {
                      ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                       while(k<l&&(nums[k]==nums[k+1]))k++;   //to avoid duplicate
                       while(k<l&&(nums[l]==nums[l-1]))l--;   //to avoid duplicate
                      k++;
                      l--;
                    
                  }
              }
          }
        }
    return ans;
    }
};