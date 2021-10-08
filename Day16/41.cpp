class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
      vector<int>pref(n+1,0),suff(n+1,0);
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=cardPoints[i];
            suff[i+1]=sum;
        }
        sum=0;
        for(int i=0;i<n;i++){
            sum+=cardPoints[i];
            pref[i+1]=sum;
        }
        int ans=max(pref[k],suff[n-k+1]);
       //cout<<suff[n-k+1]<<'\n';
       // cout<<pref[k]<<'\n';
        for(int i=1;i<k;i++){
            int left=i;
            int right=n-k+i+1;
            ans=max(ans,pref[left]+suff[right]);
        }
        return ans;
    }
};
/*
1 2 3 4 5 6 1
pref=[1 3 6 10 15 21 22]
suff=[22 21 19 16 12 7 1]

*/
class Solution { //with even less space
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
      vector<int>suff(n+2,0);
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=cardPoints[i];
            suff[i+1]=sum;
        }
        sum=0;
        int ans=max(suff[1]-suff[k+1],suff[n-k+1]);
         for(int i=1;i<k;i++){
            sum+=cardPoints[i-1];
            int right=n-k+i+1;
            ans=max(ans,sum+suff[right]);
            
        }
        return ans;
    }
};
/*
1 2 3 4 5 6 1
pref=[1 3 6 10 15 21 22]
suff=[22 21 19 16 12 7 1]

*/