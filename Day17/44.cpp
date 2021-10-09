class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int>ans;
      for(int i=0;i<nums.size();i++){ //since the numbers repeat only once at max 
          int id=abs(nums[i])-1;
          if(nums[id]<0)ans.push_back(id+1);
        nums[id]=(nums[id]*(-1));
      }
        return ans;
    }
};