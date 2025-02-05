#include <bits/stdc++.h>

using namespace std;

#define vi vector<double>

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  vector<vi> dp(n + 1, vi(n + 1, -1));

  auto dfs = [&](int idx, int hC, auto &self) -> double {
    if (idx > n) {
      if (hC <= n / 2) {
        return 0;
      } else {
        return 1;
      }
    }
    if (dp[idx][hC] != -1) {
      return dp[idx][hC];
    }
    dp[idx][hC] = 0;
    dp[idx][hC] += a[idx] * self(idx + 1, hC + 1, self);
    dp[idx][hC] += (1 - a[idx]) * self(idx + 1, hC, self);
    return dp[idx][hC];
  };

  dfs(0, 0, dfs);
  cout << fixed << setprecision(10) << dp[0][0] << endl;

  return 0;
}
