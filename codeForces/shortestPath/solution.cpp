#include <bits/stdc++.h>
#include <queue>

using namespace std;

#define pii pair<int, int>
#define vi vector<int>

int main(int argc, char *argv[]) {
  int n, m, k;
  cin >> n >> m >> k;

  vector<vi> adj(n);

  for (int i = 0; i < m; i++) {
    int f, s;
    cin >> f >> s;
    f--, s--;
    adj[f].push_back(s);
    adj[s].push_back(f);
  }
  set<vector<int>> forbidden;

  for (int i = 0; i < k; i++) {
    int f, s, t;
    cin >> f >> s >> t;
    f--, s--, t--;
    forbidden.insert({f, s, t});
  }

  vector<vector<bool>> vis(n, vector<bool>(n, false));
  vector<vi> parent(n, vector<int>(n, -1));

  queue<pii> que;
  auto bfs = [&]() {
    int st = 0;
    que.push({st, -1});
    while (!que.empty()) {
      auto [curr, par] = que.front();
      que.pop();

      if (curr == n - 1) {
        int c = par;
        vi path;
        while (c != -1) {
          path.push_back(curr + 1);
          c = parent[c][curr];
          curr = par;
          par = c;
        }
        path.push_back(1);

        cout << path.size() - 1 << "\n";
        for (int i = path.size() - 1; i >= 0; i--) {
          cout << path[i] << " ";
        }
        return true;
      }

      for (auto i : adj[curr]) {
        if (!forbidden.count({par, curr, i}) && !vis[curr][i]) {
          parent[curr][i] = par;
          vis[curr][i] = true;
          que.push({i, curr});
        }
      }
    }
    return false;
  };
  if (!bfs()) {
    cout << -1;
  }

  return 0;
}
