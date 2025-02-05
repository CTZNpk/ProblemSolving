#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>

int main() {
  int n;
  cin >> n;

  vi a(n);
  vi b(n);
  vi c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  vector<vi> dp(n, vi(3, -1));

  auto &&dfs = [&](int i, int curr, auto &&self) -> int {
    if (i >= n) {
      return 0;
    }
    if (dp[i][curr] != -1) {
      return dp[i][curr];
    }
    if (curr != 0) {
      dp[i][curr] = max(self(i + 1, 0, self), dp[i][curr]);
    }

    if (curr != 1) {
      dp[i][curr] = max(self(i + 1, 1, self), dp[i][curr]);
    }

    if (curr != 2) {
      dp[i][curr] = max(self(i + 1, 2, self), dp[i][curr]);
    }
    if (curr == 0) {
      return dp[i][curr] += a[i];
    }

    if (curr == 1) {
      return dp[i][curr] += b[i];
    }

    return dp[i][curr] += c[i];
  };

  dfs(0, 0, dfs);
  dfs(0, 1, dfs);
  dfs(0, 2, dfs);

  cout << max(dp[0][0], max(dp[0][1], dp[0][2])) << '\n';
}
