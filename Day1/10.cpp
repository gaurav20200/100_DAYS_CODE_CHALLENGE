#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>pairr;
        int flag=0;
        for(int i=0;i+1<nums.size();i++){
            int sum=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(sum+nums[j]==target){
                    flag=1;
                    pairr.push_back(i);
                    pairr.push_back(j);
                    break;
                }
            }
            if(flag)break;
        }
        return pairr;
    }
};
int main(){
    int n;cin>>n;
vector<int>nums(n);
int target;
for(auto &it:nums)cin>>it;
Solution s;
vector<int>v=s.twoSum(nums,target);
for(auto it:v)cout<<it<<' ';
return 0;
}