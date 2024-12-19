#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>

int main(int argc, char *argv[]) {
  int n, k, d;
  cin >> n >> k >> d;
  queue<pii> que;
  vi vis(n, 0);

  for (int i = 0; i < k; i++) {
    int t;
    cin >> t;
    t--;
    if (!vis[t]) {
      que.push({t, -1});
      vis[t] = true;
    }
  }
  vector<vector<pii>> adj(n);
  for (int i = 0; i < n - 1; i++) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    adj[l].emplace_back(r, i + 1);
    adj[r].emplace_back(l, i + 1);
  }

  vector<int> ans;

  while (!que.empty()) {
    auto [u, p] = que.front();
    que.pop();
    for (auto [v, i] : adj[u]) {
      if (v != p) {
        if (vis[v]) {
          if (u < v) {
            ans.push_back(i);
          }
        } else {
          vis[v] = true;
          que.push({v, u});
        }
      }
    }
  }
  cout << ans.size() << "\n";
  for (auto i : ans) {
    cout << i << " ";
  }

  return 0;
}
