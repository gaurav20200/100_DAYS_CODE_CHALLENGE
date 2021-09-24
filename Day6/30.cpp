#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int dir=0;
        vector<int>ans;
        while((top<=down)&&(left<=right)){
           if(dir==0){
               for(int i=left;i<=right;i++){
                   ans.push_back(matrix[top][i]);
               }
               top++;
           }else if(dir==1){
               for(int i=top;i<=down;i++){
                   ans.push_back(matrix[i][right]);
               }
               right--;
           }else if(dir==2){
               for(int i=right;i>=left;i--){
                   ans.push_back(matrix[down][i]);
               }
               down--;
           }else if(dir==3) {
               for(int i=down;i>=top;i--){
                   ans.push_back(matrix[i][left]);
               }
               left++;
           }
            dir++;
            dir%=4;
        }
        return  ans;
    }
};
int main(){
Solution s;

int n,m;cin>>n>>m;
vector<vector<int>>a(n,vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)cin>>a[i][j];
}
vector<int>ans=s.spiralOrder(a);
for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
cout<<"\n";
return 0;
}