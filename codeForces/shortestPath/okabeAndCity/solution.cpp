#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define pii pair<int, int>
int n, m, k;

vector<pii> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isInside(int x, int y) { return x >= 0 && x < n && y >= 0 && y < m; }

int main(int argc, char *argv[]) {
  cin >> n >> m >> k;

  vector<vector<bool>> board(n, vector<bool>(m, 0));

  for (int i = 0; i < k; i++) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    board[l][r] = true;
  }

  queue<pii> que;

  vector<vector<bool>> vis(n, vector<bool>(m, false));
  que.push({0, 0});
  vis[0][0] = true;

  int minX = 0, maxX = 0, minY = 0, maxY = 0;
  int cost = 0;

  while (!que.empty()) {
    auto [i, j] = que.front();
    que.pop();

    minX = min(minX, i);
    minY = min(minY, j);
    maxX = max(maxX, i);
    maxY = max(maxY, j);
    if (i == n - 1 && j == m - 1) {
      cout << cost;
      return 0;
    }

    for (auto [x, y] : dir) {
      int newX = i + x, newY = j + y;
      if (isInside(newX, newY) && board[newX][newY] && !vis[newX][newY]) {
        vis[newX][newY] = true;
        que.push({newX, newY});
      }
    }

    if (que.empty()) {
      cost++;
      if (maxY >= n - 2 || maxX >= m - 2) {
        cout << cost;
        return 0;
      }

      for (int j = max(minX - 2, 0); j <= min(maxX + 2, m - 1); j++) {
        for (int i = 0; i < n; i++) {
          if (!vis[i][j] && board[i][j]) {
            vis[i][j] = true;
            que.push({i, j});
          }
        }
      }
      for (int i = max(minY - 2, 0); i <= min(maxY + 2, n - 1); i++) {
        for (int j = 0; j < m; j++) {
          if (!vis[i][j] && board[i][j]) {
            vis[i][j] = true;
            que.push({i, j});
          }
        }
        minX = m + 1, maxX = -1, minY = n + 1, maxY = -1;
      }
    }
  }
  cout << -1 << "\n";

  return 0;
}
