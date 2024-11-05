#include <bits/stdc++.h>
#include <queue>

using namespace std;

#define ll long long

// void djikstra(int start, vector<ll> &dist,
//               vector<vector<pair<int, int>>> &adj) {
//   priority_queue<pair<ll, int>> pq;
//   pq.push({0, start});
//   dist[start] = 0;
//   while (pq.size()) {
//     pair<ll, int> curr = pq.top();
//     pq.pop();
//     ll d = -curr.first;
//     int u = curr.second;
//     if (dist[u] < d)
//       continue;
//     for (pair<int, int> edge : adj[u]) {
//       int v = edge.first, w = edge.second;
//       if (dist[v] > d + w) {
//         dist[v] = d + w;
//         pq.push({-d - w, v});
//       }
//     }
//   }
// }
//

void djikstra(int start, vector<ll> &dist, vector<vector<pair<int, int>>> adj) {
  priority_queue<pair<ll, int>> pq;
  pq.push({0, start});
  while (pq.size()) {
    pair<ll, int> curr = pq.top();
    pq.pop();
    ll d = -curr.first;
    int u = curr.second;
    if (dist[u] < d) {
      continue;
    }

    for (auto &edge : adj[u]) {
      int v = edge.first;
      ll w = edge.second;
      if (dist[v] > w + d) {
        dist[v] = w + d;
        pq.push({-d - w, v});
      }
    }
  }
}

// void djikstra(int start, vector<ll> &dist, vector<vector<pair<int, int>>>
// adj) {
//   priority_queue<pair<ll, int>> pq;
//   pq.push({0, start});
//   dist[start] = 0;
//   while (pq.size()) {
//     pair<ll, int> curr = pq.top();
//     pq.pop();
//     ll d = -curr.first;
//     int u = curr.second;
//     if (dist[u] < d) {
//       continue;
//     }
//     for (auto edge : adj[u]) {
//       int v = edge.first;
//       int w = edge.second;
//       if (dist[v] > d + w) {
//         dist[v] = d + w;
//         pq.push({-d - w, v});
//       }
//     }
//   }
// }

int main(int argc, char *argv[]) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vector<vector<pair<int, int>>> adj(n);
  for (int i = 0; i < m; i++) {
    int u, v, b;
    cin >> u >> v >> b;
    adj[u - 1].push_back({v - 1, b + a[v - 1]});
    adj[v - 1].push_back({u - 1, b + a[u - 1]});
  }
  vector<ll> dist(n, 1ll << 60);
  djikstra(0, dist, adj);
  for (int i = 1; i < n; i++) {
    cout << dist[i] + a[0] << " ";
  }

  return 0;
}
