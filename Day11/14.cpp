class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        string ans="";
        int i=0;
        while(1){
            int flag=0;
            for(int j=1;j<strs.size();j++){
                if((i==strs[j].size())||(strs[j][i]!=strs[j-1][i])){
                   flag=1;
                    break;
                }
            }
            if(flag)break;
            ans+=strs[0][i];
           i++;
        }
        return ans;
    }
};