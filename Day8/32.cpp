class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
     for(int i=0;i<matrix.size();i++){
         for(int j=i;j<matrix.size();j++){
             swap(matrix[i][j],matrix[j][i]);
         }
        int k=0,l=n-1;
         while(k<=l){
             swap(matrix[i][k],matrix[i][l]);
             k++;
             l--;
         }
     }
    }
};