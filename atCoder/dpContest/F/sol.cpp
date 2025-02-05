#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

int main(int argc, char *argv[]) {
  string s, t;
  cin >> s;
  cin >> t;

  int n1 = s.length();
  int n2 = t.length();

  vector<vi> dp(n1 + 1, vi(n2 + 1, 0));

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      } else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }

  int i = n1, j = n2;

  string ans = "";
  while (i != 0 && j != 0) {
    if (s[i - 1] == t[j - 1]) {
      ans += s[i - 1];
      i--;
      j--;
    } else {
      if (dp[i - 1][j] == dp[i][j]) {
        i--;
      } else {
        j--;
      }
    }
  }

  reverse(ans.begin(), ans.end());
  cout << ans << "\n";

  return 0;
}
