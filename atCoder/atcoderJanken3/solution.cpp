#include <bits/stdc++.h>

using namespace std;

// R = 0 ,P =1, S = 2
vector<string> validMoves = {"01", "12", "20"};

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  string s;

  cin >> s;

  for (auto &i : s) {
    if (i == 'R') {
      i = '0';
    } else if (i == 'S') {
      i = '2';
    } else {
      i = '1';
    }
  }

  vector<vector<int>> dp(n, vector<int>(3, -1));

  auto f = [&](int prevChar, int idx, auto &&self) -> int {
    if (idx >= n) {
      return 0;
    }
    if (dp[idx][prevChar] != -1) {
      return dp[idx][prevChar];
    }

    int ai = s[idx] - '0';

    int a = -1;
    for (auto i : validMoves[ai]) {
      int k = i - '0';
      if (k == prevChar) {
        continue;
      }
      int sol = self(k, idx + 1, self);

      if (k != ai) {
        sol++;
      }
      a = max(a, sol);
    }
    return dp[idx][prevChar] = a;
  };

  int ans = 0;
  ans = max(ans, f(0, 0, f));
  ans = max(ans, f(1, 0, f));
  ans = max(ans, f(2, 0, f));

  cout << ans;

  return 0;
}
