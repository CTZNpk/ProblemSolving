
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

ll n, m, k;
vector<pii> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
vector<pii> revDir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < m; }

void sol() {
  cin >> n >> m >> k;
  vector<vi> a(n, vi(m, 0));
  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  vector<vector<pair<ll, int>>> dist(n + 1,
                                     vector<pair<ll, int>>(m + 1, {-1, -1}));
  vector<pii> parent(n, {-1, -1});

  auto djikstra = [&]() {
    priority_queue<pair<ll, pii>> pq;
    pq.push({a[0][0], {0, 0}});
    dist[0][0] = {a[0][0], -1};
    while (pq.size()) {
      pair<ll, pii> curr = pq.top();
      pq.pop();
      ll d = -curr.first;
      pii u = curr.second;
      if (u.first == n - 1 && u.second == m - 1)
        return;
      if (dist[u.first][u.second].first < d)
        continue;
      int parDir = 0;
      for (auto [i, j] : dir) {
        int x = u.first + i, y = u.second + j;
        parDir++;
        if (valid(x, y)) {
          ll w = -a[x][j];
          if (dist[x][y].first > d + w) {
            dist[x][y] = {d + w, parDir};
            pq.push({-d - w, {x, y}});
          }
        }
      }
    }
  };

  djikstra();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << i << " " << j << " " << dist[i][j].first << " "
           << dist[i][j].second << "\n";
    }
  }

  vector<pair<int, int>> path;
  path.push_back({n - 1, m - 1});
  int i = n - 1, j = m - 1;
  cout << "\n";
  cout << i << " " << j << "\n";
  while (i != 0 && j != 0) {
    cout << dist[i][j].second << "\n";
    pii mov = revDir[dist[i][j].second];
    i += mov.first;
    j += mov.second;
    cout << i << " " << j << "\n";
    cout << "\n";
    path.push_back({i, j});
  }
  reverse(all(path));
  for (auto &i : path) {
    cout << i.first << " " << i.second << "\n";
  }
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
