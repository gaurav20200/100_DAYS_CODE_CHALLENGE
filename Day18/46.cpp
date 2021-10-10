class Solution {
public:
    vector<vector<int>>ans;
    void generate(vector<int>&subset,vector<int>&nums,int i){
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        generate(subset,nums,i+1);
        subset.push_back(nums[i]);
        generate(subset,nums,i+1);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>subset;
       generate(subset,nums,0);
        return ans;
    }
};




//using bitmasks
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>ans;
        int n=nums.size();
        for(int  i=0;i<int(pow(2,n));i++){
            vector<int>temp;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j))temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};