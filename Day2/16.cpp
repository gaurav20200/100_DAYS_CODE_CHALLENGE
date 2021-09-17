#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>right_sum,left_sum;
        int n=nums.size();
        int sum =0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            right_sum.push_back(sum);
            //cout<<sum<<" ";
        }
        reverse(right_sum.begin(),right_sum.end());
        //cout<<'\n';
        sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            left_sum.push_back(sum);
            //cout<<sum<<" ";
            }
            //cout<<'\n';
        int ans=-1;
        for(int i=1;i+1<n;i++){
            if(left_sum[i-1]==right_sum[i+1]){
                ans=i;
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    Solution s;
   cout<<s.pivotIndex(a);
return 0;
}