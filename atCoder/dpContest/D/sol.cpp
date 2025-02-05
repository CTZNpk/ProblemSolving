#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>

int main() {
  ll n, mxw;
  cin >> n >> mxw;

  vll w(n), v(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i] >> v[i];
  }

  vector<vll> dp(n, vll(mxw + 1, -1));
  auto dfs = [&](int i, int left, auto &&self) -> ll {
    if (i >= n)
      return 0;
    if (dp[i][left] != -1) {
      return dp[i][left];
    }
    dp[i][left] = max(self(i + 1, left, self), dp[i][left]);
    if ((left - w[i]) >= 0)
      dp[i][left] = max(dp[i][left], self(i + 1, left - w[i], self) + v[i]);
    return dp[i][left];
  };
  cout << dfs(0, mxw, dfs) << "\n";
}
