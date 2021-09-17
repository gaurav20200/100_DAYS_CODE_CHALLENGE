class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr=0;
        int n=nums.size();
       for(int i=0;i<n;){
           int j=i;
           while(j+1<n&&(nums[j]==nums[j+1]))j++;
           nums[ptr]=nums[j];
           ptr++;
           i=j+1;
       }
        ptr;
        nums.resize(ptr);
        return ptr;
    }
};