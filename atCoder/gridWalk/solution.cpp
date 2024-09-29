#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int h, w;
  cin >> h >> w;
  int si, sj;
  cin >> si >> sj;
  si--;
  sj--;

  vector<string> grid;
  for (int i = 0; i < h; i++) {
    string k;
    cin >> k;
    grid.push_back(k);
  }

  string q;
  cin >> q;

  for (int i = 0; i < q.length(); i++) {
    if (q[i] == 'U') {
      if (si - 1 >= 0) {
        if (grid[si - 1][sj] != '#') {
          si--;
        }
      }

    } else if (q[i] == 'L') {
      if (sj - 1 >= 0) {
        if (grid[si][sj - 1] != '#') {
          sj--;
        }
      }

    } else if (q[i] == 'D') {
      if (si + 1 < h) {
        if (grid[si + 1][sj] != '#') {
          si++;
        }
      }

    } else {
      if (sj + 1 < w) {
        if (grid[si][sj + 1] != '#') {
          sj++;
        }
      }
    }
  }
  cout << si + 1 << " " << sj + 1;
  return 0;
}
