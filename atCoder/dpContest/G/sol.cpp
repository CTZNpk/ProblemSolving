#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>

int main(int argc, char *argv[]) {
  int n, m;
  cin >> n >> m;

  vector<vi> adj(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    adj[u].push_back(v);
  }

  vi dp(n, -1);

  auto dfs = [&](int curr, auto &&self) -> int {
    if (dp[curr] != -1) {
      return dp[curr];
    }
    dp[curr] = 0;
    for (auto &i : adj[curr]) {
      dp[curr] = max(dp[curr], self(i, self) + 1);
    }
    return dp[curr];
  };

  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(dfs(i, dfs), ans);
  }
  cout << ans << "\n";

  return 0;
}
