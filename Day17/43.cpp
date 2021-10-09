//THE SLOWEST CODE (just enough to pass)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dirx[4]={0,-1,1,0};
    int diry[4]={-1,0,0,1};
    int valid(int x,int y,int n, int m){
        if(x<0||x>=n)return 0;
        if(y<0||y>=m)return 0;
        return 1;
    }
    vector<vector<int>>bfs(vector<vector<int>>&visited,vector<vector<int>>&grid,int n, int m,int first,int second){
         queue<pair<int,int>>q;
        q.push({first,second});
        while(!q.empty()){
           // cout<<" alfjl ";
            auto cur=q.front();
            visited[cur.first][cur.second]=1;
            for(int i=0;i<4;i++){
                if(valid(cur.first+dirx[i],cur.second+diry[i],n,m)&&(!visited[cur.first+dirx[i]][cur.second+diry[i]])&&(grid[cur.first+dirx[i]][cur.second+diry[i]]==1)){
                    q.push({cur.first+dirx[i],cur.second+diry[i]});
                    visited[cur.first+dirx[i]][cur.second+diry[i]]=1;
                }
            }
      q.pop();
     }
        return visited;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        //cout<<"hello ";
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int curr=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //cout<<"here ";
                if(grid[i][j]==1&&(!visited[i][j])){
                    visited=bfs(visited,grid,n,m,i,j);
                }
                 int now=0;
          for(int k=0;k<n;k++){
              for(int l=0;l<m;l++){
                  now+=visited[k][l];
              }
            }
            ans=max(ans,now-curr);
            curr=now;
          }
        }
        return ans;
    }
};
int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>>grid(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
 Solution s;
 cout<<s.maxAreaOfIsland(grid)<<'\n';
return 0;
}