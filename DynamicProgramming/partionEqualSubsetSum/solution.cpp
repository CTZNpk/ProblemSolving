#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  static bool canPartition(vector<int> &nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += nums[i];
    }
    if (sum % 2) {
      return false;
    }
    int target = sum / 2;
    vector<bool> dp(target + 1, false);
    dp[0] = true;
    for (int i = 1; i <= n; i++) {
      for (int j = target; j >= 0; j--) {
        if (j - nums[i - 1] >= 0) {
          dp[j] = dp[j] | dp[j - nums[i - 1]];
        }
      }
      if (dp[target] == true) {
        return true;
      }
    }
    return false;
  }
};

int main(int argc, char *argv[]) {
  vector<int> nums = {1, 5, 11, 5};

  cout << Solution::canPartition(nums);

  return 0;
}
