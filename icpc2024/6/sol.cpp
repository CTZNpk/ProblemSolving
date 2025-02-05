#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

pair<int, int> bfs(int start, const vector<vector<int>> &adj) {
  int n = adj.size();
  vector<bool> visited(n, false);
  queue<int> q;
  q.push(start);
  visited[start] = true;
  vector<int> dist(n, 0);
  int max_dist = 0;
  int far_node = start;

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int v : adj[u]) {
      if (!visited[v]) {
        visited[v] = true;
        dist[v] = dist[u] + 1;
        if (dist[v] > max_dist) {
          max_dist = dist[v];
          far_node = v;
        }
        q.push(v);
      }
    }
  }
  return {far_node, max_dist};
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int V;
    cin >> V;
    vector<vector<int>> adj(V);
    for (int i = 0; i < V - 1; ++i) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    // Compute diameter using two BFS
    pair<int, int> first_bfs = bfs(0, adj);
    pair<int, int> second_bfs = bfs(first_bfs.first, adj);
    int diameter = second_bfs.second;
    int depth = diameter;

    // Compute degrees and sort
    vector<int> degrees;
    for (int i = 0; i < V; ++i) {
      degrees.emplace_back(adj[i].size());
    }

    sort(degrees.begin(), degrees.end());

    cout << depth << " " << degrees[V - 1] << " " << degrees[max(V - 2, 0)]
         << "\n";
  }

  return 0;
}
