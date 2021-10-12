class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int ans=0;
        map<int,int>mp;
        mp[sum]++;
        int n= nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int temp=sum%k;
            if(temp<0)temp+=k; //make negative reminder +ve because reminders exist in pairs
            if(mp[temp]){
                ans+=mp[temp];
                mp[temp]++;
            }
            else mp[temp]++;
          }
        return ans;
    }
};