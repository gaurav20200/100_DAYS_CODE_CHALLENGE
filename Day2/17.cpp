class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int>mp; //1 2 2 2 2 1 1 1 1 1
        // int n=nums.size();
        // for(auto it:nums)mp[it]++;
        // int ans=0;
        // for(auto it:mp){
        //     if(it.second>(n/2))ans=it.first;
        // }
        // return ans;
        int count=1,maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            if(count==0){
                maxi=nums[i];
                count++;
            }else if(maxi==nums[i]){
                count++;
            }else count--;
        }
        return maxi;
    }
};