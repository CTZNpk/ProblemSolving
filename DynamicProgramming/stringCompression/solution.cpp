#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  static int getLengthOfOptimalCompression(string s, int k) {
    int n = s.length();
    vector<vector<int>> dp(n + 1, vector(k + 1, 101));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= k; j++) {
        int cnt = 0, del = 0;
        for (int l = i; l >= 1; l--) {
          if (s[l - 1] == s[i - 1]) {
            cnt++;

          } else {
            del++;
          }
          if (j - del >= 0) {
            dp[i][j] = min(dp[i][j], dp[l - 1][j - del] + 1 +
                                         (cnt > 99    ? 3
                                          : cnt >= 10 ? 2
                                          : cnt > 1   ? 1
                                                      : 0));
          }
        }
        if (j > 0) {
          dp[i][j] = min(dp[i - 1][j - 1], dp[i][j]);
        }
      }
    }
    return dp[n][k];
  }
};

int main(int argc, char *argv[]) {
  string s = "aaabbaaabbaaaaa";
  int k = 4;
  cout << Solution::getLengthOfOptimalCompression(s, k);

  return 0;
}
