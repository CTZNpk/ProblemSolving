#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  static int uniquePaths(int m, int n) {
    vector<vector<int>> table(m, vector(n, 1));
    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        table[i][j] = table[i][j - 1] + table[i - 1][j];
      }
    }
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cout << table[i][j] << " ";
      }
      cout << endl;
    }
    return table[m - 1][n - 1];
  }
};

int main(int argc, char *argv[]) {
  int m = 3, n = 7;
  cout << Solution::uniquePaths(m, n);

  return 0;
}
