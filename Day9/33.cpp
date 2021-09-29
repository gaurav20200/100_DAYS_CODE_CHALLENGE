/*https://leetcode.com/problems/word-search/*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
     bool exist(vector<vector<char>>& a, string word) {
         n=a.size();
         m=a[0].size();
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if(a[i][j]==word[0]){
                   bool ans=dfs(a,word,0,i,j);
                   if(ans)return ans;
                 }
             }
         }
         return false;
     }
     private:
      int n,m;
      bool dfs(vector<vector<char>>&a,string s,int i,int row, int col){
           if(row==a.size())return false;
           if(col==a[0].size())return false;
           if(row==-1||col==-1)return false;
          if(a[row][col]=='\0')return false;
           if(s[i]!=a[row][col])return false;
             if(s[i+1]=='\0')return true;
             char chat=a[row][col];
             a[row][col]='\0';
           if( dfs(a,s,i+1,row,col+1)||dfs(a,s,i+1,row+1,col)||dfs(a,s,i+1,row,col-1)||dfs(a,s,i+1,row-1,col)){
               return  true;
           }
           a[row][col]=chat;
           return false;      
      }
};
int main(){
int n,m;
cin>>n>>m;
vector<vector<char>>a(n,vector<char>(m,0));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
string word;
cin>>word;
Solution s;
bool ans=s.exist(a,word);
cout<<ans<<'\n';
return 0;
}