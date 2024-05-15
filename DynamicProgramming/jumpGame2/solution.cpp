#include <climits>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  static int jump(vector<int> &nums) {
    int n = nums.size();
    if (n == 0 || n == 1) {
      return 0;
    }
    vector<int> r(n);
    r[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--) {
      int k = nums[i];
      int minInK = pow(10, 4) + 1;
      for (int j = i + 1; j < n && j <= i + k; j++) {
        if (r[j] < minInK) {
          minInK = r[j];
        }
      }
      r[i] = minInK + 1;
    }
    return r[0];
  }
};

int main(int argc, char *argv[]) {
  vector<int> nums = {2, 3, 0, 0, 1, 1, 4};
  // {3,2,12000,2,1,0}

  cout << Solution::jump(nums);

  return 0;
}
