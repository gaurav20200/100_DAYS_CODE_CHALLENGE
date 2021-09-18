#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>>ans;
//         if(nums.size()==0)return ans;
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         set<vector<int>>st;
//         for(int i=0;i+2<nums.size();i++){
//             int sum=nums[i];
//             for(int j=i+1;j+1<n;j++){
//                 sum+=nums[j];
//                 int start=j+1,end=n-1;
//                     while(start<=end){
//                     int mid=(start+end)/2;
//                      if((sum+nums[mid])==0){
//                          if(st.count({nums[i],nums[j],nums[mid]})==0){
//                          ans.push_back({nums[i],nums[j],nums[mid]});
//                          st.insert({nums[i],nums[j],nums[mid]});
//                          }
//                          break;
//                      }else if((sum+nums[mid])<0){
//                          start=mid+1;
//                      }else end=mid-1;
                    
//                 }
//                 sum-=nums[j];
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i+1<n;i++){
            int sum=nums[i];
            int to_find=-sum;
            int start=i+1,end=n-1;
            while(start<end){
                if(nums[start]+nums[end]==to_find){
                    ans.push_back({nums[i],nums[start],nums[end]});
                    while(start<end&&(nums[start]==nums[start+1]))start++;
                    while(start<end&&(nums[end]==nums[end-1]))end--;
                    start++;
                    end--;
                }else if(nums[start]+nums[end]<to_find){
                    start++;
                }else {
                    end--;
                }
            }
            while(i+1<n&&(nums[i]==nums[i+1]))i++;
        }
    return ans;
    }
};
int main(){
int n;
cin>>n;vector<int>num(n);
for(auto &it:num)cin>>it;
Solution s;
vector<vector<int>>ans=s.threeSum(num);
for(auto list:ans){
    for(auto points:list)cout<<points<<" ";
    cout<<'\n';
}
return 0;
}