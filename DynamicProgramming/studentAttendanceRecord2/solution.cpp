#include <iostream>

using namespace std;

typedef long long ll;

ll dp[100001][2][3];

class Solution {
  int mod = 1000000007;

public:
  int solve(int n, bool a, int l) {
    if (dp[n][a][l] != 0) {
      return dp[n][a][l];
    }
    if (n == 0) {
      return 1;
    }
    ll sum = 0;
    if (!a) {
      sum = (sum + solve(n - 1, true, 0) % mod) % mod;
    }
    if (l < 2) {
      sum = (sum + solve(n - 1, a, l + 1) % mod) % mod;
    }
    sum = (sum + solve(n - 1, a, 0) % mod) % mod;
    dp[n][a][l] = sum % mod;
    return dp[n][a][l];
  }

  int checkRecord(int n) { return solve(n, false, 0); }
};

int main(int argc, char *argv[]) {
  Solution solution = Solution();
  cout << solution.checkRecord(10101);

  return 0;
}
