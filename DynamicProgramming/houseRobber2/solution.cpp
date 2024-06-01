#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  static int rob(vector<int> &nums) {
    int n = nums.size();
    if (n == 1) {
      return nums[0];
    }
    if (n == 2) {
      return max(nums[0], nums[1]);
    }
    vector<vector<int>> dp(n, vector(2, 0));
    dp[0][0] = nums[0];
    dp[0][1] = 0;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < 2; j++) {
        if (i == 1) {
          dp[i][j] = max(dp[i - 1][j], nums[i]);
        } else {
          dp[i][j] = max(dp[i - 2][j] + nums[i], dp[i - 1][j]);
        }
      }
    }
    return max(dp[n - 2][0], dp[n - 1][1]);
  }
};

int main(int argc, char *argv[]) {
  vector<int> nums = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
  cout << Solution::rob(nums);

  return 0;
}
