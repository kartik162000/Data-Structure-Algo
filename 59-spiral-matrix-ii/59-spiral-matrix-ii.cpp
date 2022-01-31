class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n));
        int total = n*n;
        int rows=0;
        int rowe=n-1;
        int cols=0;
        int cole=n-1;
        int check=1;
        while(check<=total){
            for(int index=cols; index<=cole; index++){
                ans[rows][index]=check;
                check++;
            }
            rows++;
            for(int index=rows; index<=rowe; index++){
                ans[index][cole]=check;
                check++;
            }
            cole--;
            for(int index=cole; index>=cols; index--){
                ans[rowe][index]=check;
                check++;
            }
            rowe--;
            for(int index=rowe; index>=rows; index--){
                ans[index][cols]=check;
                check++;
            }
            cols++;
        }
        return ans;
    }
};