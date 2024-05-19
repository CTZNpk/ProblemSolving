#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  static int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
    int n = floor.length();
    vector<vector<int>> dp(n + 1, vector<int>(numCarpets + 1, 0));
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= numCarpets; j++) {
        int jump = dp[i - 1][j] + floor[i - 1] - '0';
        if (j == 0) {
          dp[i][j] = jump;
        } else {
          int cover = dp[max(i - carpetLen, 0)][j - 1];
          dp[i][j] = min(cover, jump);
        }
      }
    }
    return dp[n][numCarpets];
  }
};

int main(int argc, char *argv[]) {
  string floor = "10110101";
  int numCarpets = 3;
  int carpetLen = 2;

  cout << Solution::minimumWhiteTiles(floor, numCarpets, carpetLen);

  return 0;
}
