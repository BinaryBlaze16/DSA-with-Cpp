class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
          vector<vector<int>> temp(n, vector<int>(m));
        while(k>0){
       for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {

        if (j == 0) {
            if (i == 0)
                temp[i][j] = grid[n-1][m-1];
            else
                temp[i][j] = grid[i-1][m-1];
        } else {
            temp[i][j] = grid[i][j-1];
        }

    }
}
        grid = temp; 
       k--;
        }
        return grid;
    }
};