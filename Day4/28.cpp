class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        int n=nums.size(),cur=0;
        for(int i=0;i<n;i++){
             cur+=nums[i];
            if(cur==k)ans+=1;
            if(mp.find(cur-k)!=mp.end())ans+=mp[cur-k];
            mp[cur]++;
        }
        return ans;
    }
};