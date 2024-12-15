#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
int n, m;

vector<pii> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isInside(int i, int j) { return i > 0 && i < n - 1 && j > 0 && j < m - 1; }

void sol() {
  cin >> n >> m;
  vector<vi> board(n, vi(m, 0));
  for (auto &i : board) {
    for (auto &j : i) {
      cin >> j;
    }
  }
  priority_queue<pair<int, pii>, vector<pair<int, pii>>,
                 greater<pair<int, pii>>>
      que;

  for (int i = 0; i < n; i++) {
    que.push({board[i][m - 1], {i, m - 1}});
    que.push({board[i][0], {i, 0}});
  }

  for (int i = 1; i < m - 1; i++) {
    que.push({board[0][i], {0, i}});
    que.push({board[n - 1][i], {n - 1, i}});
  }

  int currHeight = 0;
  vector<vector<bool>> vis(n, vector<bool>(m, false));
  int ans = 0;

  auto bfs = [&]() {
    while (!que.empty()) {
      pair<int, pii> curr = que.top();
      que.pop();

      int height = curr.first;
      pii cords = curr.second;

      int i = cords.first;
      int j = cords.second;

      currHeight = max(currHeight, height);
      ans += currHeight - height;
      for (auto [k, l] : dir) {
        int newX = i + k, newY = j + l;
        if (isInside(newX, newY) && !vis[newX][newY]) {
          vis[newX][newY] = true;
          que.push({board[newX][newY], {newX, newY}});
        }
      }
    }
  };

  bfs();
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
