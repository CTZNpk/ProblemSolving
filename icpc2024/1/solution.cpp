#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pii pair<ll, int>

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {

    int n, m;
    cin >> n >> m;

    vector<vector<pii>> adj(n);

    for (int i = 0; i < m; i++) {
      int u, v, wei;
      cin >> u >> v >> wei;
      u--, v--;
      adj[u].push_back({v, wei});
      adj[v].push_back({u, wei});
    }
    int mn = INT_MAX;
    int mnIdx = -1;

    vector<int> dis(n);
    auto djikstra = [&](int st) {
      dis.assign(n, INT_MAX);
      priority_queue<pair<ll, int>> pq;
      pq.push({0, st});
      while (pq.size()) {
        pair<ll, int> curr = pq.top();
        pq.pop();
        ll d = -curr.first;
        int u = curr.second;
        if (dis[u] < d) {
          continue;
        }

        for (auto &edge : adj[u]) {
          int v = edge.first;
          ll w = edge.second;
          if (dis[v] > w + d) {
            dis[v] = w + d;
            pq.push({-d - w, v});
          }
        }
      }

      int sum = 0;
      for (auto &i : dis) {
        sum += i;
      }
      if (sum < mn) {
        mn = sum;
        mnIdx = st;
      }
    };

    for (int i = 0; i < n; i++) {
      djikstra(i);
    }
    cout << mnIdx + 1 << "\n";
  }
  return 0;
}
