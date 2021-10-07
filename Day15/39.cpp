class Solution {
public:
    void fun(vector<int>&a,vector<int>&cur,vector<vector<int>>&ans,int i,int sum){
        if(i==a.size()){
            if(sum==0){
                ans.push_back(cur);
            }
            return;
        }
        if(sum>=a[i]){
            cur.push_back(a[i]);
            fun(a,cur,ans,i,sum-a[i]);
            cur.pop_back();
        }
        fun(a,cur,ans,i+1,sum);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>cur;
        fun(candidates,cur,ans,0,target);
        return ans;
    }
};