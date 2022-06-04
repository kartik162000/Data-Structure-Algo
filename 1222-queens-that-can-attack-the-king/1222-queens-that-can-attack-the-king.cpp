class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> ans;
        vector<vector<int>> board(8,vector<int>(8,0));
        for(auto& x: queens)
        {
            board[x[0]][x[1]]=1;
        }
        int r=king[0];
        int c=king[1];
       for(int i=r-1;i>=0;i--){
            if(board[i][c]==1){
                ans.push_back({i,c});
                break;
            }
        }
        for(int i=r+1;i<8;i++){
            if(board[i][c]==1){
                ans.push_back({i,c});
                break;
            }
        }
        for(int i=c-1;i>=0;i--){
            if(board[r][i]==1){
                ans.push_back({r,i});
                break;
            }
        }
        for(int i=c+1;i<8;i++){
            if(board[r][i]==1){
                ans.push_back({r,i});
                break;
            }
        }
        for(int i=r,j=c;i<8 && j<8;i++,j++){
            if(board[i][j]==1){
                 ans.push_back({i,j});
                break;
            }
        }
        for(int i=r,j=c;i>=0 && j>=0 ;i--,j--){
            if(board[i][j]==1){
                 ans.push_back({i,j});
                break;
            }
        }
        for(int i=r,j=c;i>=0 && j<8 ;i--,j++){
            if(board[i][j]==1){
                 ans.push_back({i,j});
                break;
            }
        }
        for(int i=r,j=c;i<8 && j>=0 ;i++,j--){
            if(board[i][j]==1){
                 ans.push_back({i,j});
                break;
            }
        }
       
return ans;
    }
};