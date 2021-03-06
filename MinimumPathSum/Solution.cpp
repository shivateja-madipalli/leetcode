class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int h = grid.size();
        if (h == 0) return 0;
        int w = grid[0].size();
        int up = 0;
        int left = 0;
        for (int i = 1; i < h; i++) {
            grid[i][0] += grid[i - 1][0];
        }
        for (int j = 1; j < w; j++) {
            grid[0][j] += grid[0][j - 1];
        }
        for (int i = 1; i < h; i++) {
            for (int j = 1; j < w; j++) {
                up = grid[i - 1][j];
                left = grid[i][j - 1];
                grid[i][j] += (up < left ? up : left);
            }
        }
        return grid[h - 1][w - 1];
    }
};
