#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  static int coinChange(vector<int> &coins, int amount) {
    sort(coins.begin(), coins.end());
    int n = coins.size();
    vector<vector<int>> dp(n, vector(amount + 1, 0));
    int maxi = amount + 1;

    for (int i = 0; i < n; i++) {
      for (int j = 1; j <= amount; j++) {
        if (j - coins[i] < 0) {
          if (i == 0) {
            dp[i][j] = maxi;
          } else {
            dp[i][j] = dp[i - 1][j];
          }
        } else {
          if (i == 0) {
            dp[i][j] = (dp[i][j - coins[i]] + 1);
          } else {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - coins[i]] + 1);
          }
        }
      }
    }
    if (dp[n - 1][amount] >= maxi) {
      return -1;
    }
    return dp[n - 1][amount];
  }
};

int main(int argc, char *argv[]) {
  int amount = 3;
  vector<int> coins = {2};

  cout << Solution::coinChange(coins, amount);

  return 0;
}
