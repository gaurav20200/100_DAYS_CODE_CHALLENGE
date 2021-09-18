#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());       //sorting according to start point
        vector<vector<int>>ans;
        int start=intervals[0][0];
        int end=intervals[0][1];
        if(intervals.size()==1){
            return intervals;
        }
        for(int i=0;i<intervals.size();i++){
         if(i==0)continue;
         if(intervals[i][0]<=end){
             end=max(end,intervals[i][1]);
         }else{
             ans.push_back({start,end});
             start=intervals[i][0];
             end=intervals[i][1];
         }
        }
        ans.push_back({start,end});
        return ans;
    }
};
int main(){
int n;
cin>>n;
vector<vector<int>>intervals;
for(int i=0;i<n;i++){
    int start,end;
    cin>>start>>end;
    intervals.push_back({start,end});
}
Solution s;
vector<vector<int>>ans=s.merge(intervals);
for(auto list:ans){
    for(auto points:list)cout<<points<<' ';
    cout<<'\n';
}

return 0;
}