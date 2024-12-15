
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>

void sol() {
  string s, d;
  cin >> s >> d;
  pii s1, d1;
  s1 = {s[0] - 'a', s[1] - '1'};
  d1 = {d[0] - 'a', d[1] - '1'};

  vector<vi> vis(8, vi(8, 0));
  vector<vi> dis(8, vi(8, 0));

  auto bfs = [&]() {
    queue<pii> que;
    que.push(s1);
    vis[s1.first][s1.second] = true;
    dis[s1.first][s1.second] = 0;

    while (!que.empty()) {
      pii curr = que.front();
      if (curr == d1) {
        cout << dis[curr.first][curr.second] << "\n";
        return;
      }
      que.pop();
      for (int i = -2; i <= 2; i += 4) {
        for (int j = -1; j <= 1; j += 2) {
          int pos1x = curr.first + i;
          int pos1y = curr.second + j;
          if (pos1y >= 0 && pos1x >= 0 && pos1y <= 7 && pos1x <= 7) {
            if (!vis[pos1x][pos1y]) {
              dis[pos1x][pos1y] = dis[curr.first][curr.second] + 1;
              que.push({pos1x, pos1y});
            }
          }
          int pos2x = curr.first + j;
          int pos2y = curr.second + i;
          if (pos2y >= 0 && pos2x >= 0 && pos2y <= 7 && pos2x <= 7) {
            if (!vis[pos2x][pos2y]) {
              dis[pos2x][pos2y] = dis[curr.first][curr.second] + 1;
              que.push({pos2x, pos2y});
            }
          }
        }
      }
    }
    cout << "WE DUMB\n";
  };
  bfs();
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
