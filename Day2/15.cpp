class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans=0;
        vector<int>ret;
        for(auto it:nums){
            ans+=it;
            ret.push_back(ans);
        }
        return ret;
    }
};