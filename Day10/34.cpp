class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
        int ans=INT_MAX,anss=INT_MAX;
        int n=nums.size();
        for(int i=0;i+2<nums.size();i++){
          int start=i+1,end=nums.size()-1;
            while(start<end){
                int  sum=nums[start]+nums[end]+nums[i];
                //if(i==1)cout<<sum<<'\n';
                if(sum<=target){
                  if(abs(sum-target)<ans){
                      ans=abs(sum-target);
                      anss=sum;
                  }
                    start++;
                }else {
                  if(abs(sum-target)<ans){
                      ans=abs(sum-target);

                      anss=sum;
                  }

                    end--;
                }
            }
        }
        return anss;
    }
};