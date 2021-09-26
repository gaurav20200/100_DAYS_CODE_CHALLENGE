class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        for(int i=0;i+1<height.size();i++){
            for(int  j=i+1;j<height.size();j++){
                ans=max(ans,(j-i)*min(height[i],height[j]));
            }
        }
        return ans;
    }
};