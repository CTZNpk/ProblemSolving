#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
  static int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    vector<vector<int>> ans(n, vector(m, 1));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (obstacleGrid[i][j] == 1) {
          ans[i][j] = 0;
        } else if (i == 0) {
          ans[i][j] = ans[i][max(j - 1, 0)];
        } else if (j == 0) {
          ans[i][j] = ans[i - 1][j];
        } else {
          ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
        }
      }
    }
    return ans[n - 1][m - 1];
  }
};
int main(int argc, char *argv[]) {
  vector<vector<int>> obstacleGrid = {
      {0, 1},
      {0, 0},
  };
  cout << Solution::uniquePathsWithObstacles(obstacleGrid);

  return 0;
}
