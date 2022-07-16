class Solution {
public:
    int dp[51][51][51];
    const int mod = 1e9 + 7;
    vector<pair<int, int>> moves{{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    bool valid(int i, int j, int n, int m) {
        return i >= 0 && j >= 0 && i < n && j < m;
    }
    int rec(int i, int j, int n, int m, int currMove, int maxMove) {
        if(currMove > maxMove)    return 0;
        if(!valid(i, j, n, m))    return 1;
        int &val = dp[i][j][currMove];
        if(val != -1)   return val;
        int ans = 0;
        for(auto it: moves) {
            int x = it.first + i;
            int y = it.second + j;
            ans = (ans + rec(x, y, n, m, currMove + 1, maxMove)) % mod;
        }
        return val = ans;
    }
    int findPaths(int n, int m, int maxMove, int i, int j) {
        memset(dp, -1, sizeof(dp));
        return rec(i, j, n, m, 0, maxMove);
    }
};