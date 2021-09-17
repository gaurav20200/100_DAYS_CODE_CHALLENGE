class Solution {
public:                 //create a new array for result
    int sq(int n){return n*n;}
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int n=nums.size();
       vector<int>res(n);
        for(int ptr=n-1;ptr>=0;ptr--){
            if(abs(nums[i])>abs(nums[j])){
                res[ptr]=(nums[i]*nums[i]);
                i++;
            }else{
                res[ptr]=(nums[j]*nums[j]);
                j--;
            }
        }
        return res;
    }
};