class Solution {
public:
    bool vaild(int x, int y,int n,int m){
        if(x<0||x>=n)return false;
        if(y>=m||y<0)return false;
        return true;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(board[i][j]){
                   int alive=0;
                   int dead=0;
                 if(vaild(i-1,j-1,n,m)){
                       if(board[i-1][j-1]==1||board[i-1][j-1]==2){alive++;if(i==2&&j==1)cout<<1;}
                       else dead++;                       

                   }
                   if(vaild(i-1,j,n,m)){
                       if(board[i-1][j]==1||board[i-1][j]==2){if(i==2&&j==1)cout<<2;alive++;}
                       else dead++;                       

                   }
                   if(vaild(i-1,j+1,n,m)){
                       if(board[i-1][j+1]==1||board[i-1][j+1]==2){alive++;if(i==2&&j==1)cout<<3;}
                       else dead++;                       

                   }
                   if(vaild(i,j-1,n,m)){
                       if(board[i][j-1]==1||board[i][j-1]==2)alive++;
                       else dead++;                       if(i==2&&j==1)cout<<4;

                   }
                   if(vaild(i,j+1,n,m)){
                       if(board[i][j+1]==1||board[i][j+1]==2){alive++; if(i==2&&j==1)cout<<5;}
                       else dead++;                      

                   }
                   if(vaild(i+1,j-1,n,m)){
                       if(board[i+1][j-1]==1||board[i+1][j-1]==2){alive++;if(i==2&&j==1)cout<<6;}
                       else dead++;                       

                   }
                   if(vaild(i+1,j,n,m)){
                       if(board[i+1][j]==1||board[i+1][j]==2){if(i==2&&j==1)cout<<7;alive++;}
                       else dead++;
                                              

                   }
                   if(vaild(i+1,j+1,n,m)){
                       if(board[i+1][j+1]==1||board[i+1][j+1]==2){alive++; if(i==2&&j==1)cout<<8;}
                       else dead++;
                   }
                if(alive<2)board[i][j]=2;
                   if(alive>3)board[i][j]=2;
               }else {
                 
                int alive=0;
                   int dead=0;
                   if(vaild(i-1,j-1,n,m)){
                       if(board[i-1][j-1]==1||board[i-1][j-1]==2)alive++;
                       else dead++;
                   }
                   if(vaild(i-1,j,n,m)){
                       if(board[i-1][j]==1||board[i-1][j]==2)alive++;
                       else dead++;
                   }
                   if(vaild(i-1,j+1,n,m)){
                       if(board[i-1][j+1]==1||board[i-1][j+1]==2)alive++;
                       else dead++;
                   }
                   if(vaild(i,j-1,n,m)){
                       if(board[i][j-1]==1||board[i][j-1]==2)alive++;
                       else dead++;
                   }
                   if(vaild(i,j+1,n,m)){
                       if(board[i][j+1]==1||board[i][j+1]==2)alive++;
                       else dead++;
                   }
                   if(vaild(i+1,j-1,n,m)){
                       if(board[i+1][j-1]==1||board[i+1][j-1]==2)alive++;
                       else dead++;
                   }
                   if(vaild(i+1,j,n,m)){
                       if(board[i+1][j]==1||board[i+1][j]==2)alive++;
                       else dead++;
                   }
                   if(vaild(i+1,j+1,n,m)){
                       if(board[i+1][j+1]==1||board[i+1][j+1]==2)alive++;
                       else dead++;
                   }
                   if(alive==3)board[i][j]=3;
                   
               }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(board[i][j]==2)board[i][j]=0;
                else if(board[i][j]==3)board[i][j]=1;
            }
        }
    }
};