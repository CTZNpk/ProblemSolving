
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  vector<vi> board(n, vi(m, 0));
  vector<string> act(n);

  for (auto &i : act) {
    cin >> i;
  }
  auto check1 = [&](int i, int j, char toMe, auto &&self) {
    if (i < 0 || i >= n || j < 0 || j >= m) {
      return;
    }
    if (board[i][j] == 1) {
      return;
    }
    if (act[i][j] == toMe) {
      board[i][j] = 1;
      self(i - 1, j, 'D', self);
      self(i + 1, j, 'U', self);
      self(i, j - 1, 'R', self);
      self(i, j + 1, 'L', self);
    }
  };
  for (int i = 0; i < m; i++) {
    check1(0, i, 'U', check1);
    check1(n - 1, i, 'D', check1);
  }
  for (int i = 0; i < n; i++) {
    check1(i, 0, 'L', check1);
    check1(i, m - 1, 'R', check1);
  }

  int cnt0 = 0;
  auto check0 = [&](int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) {
      return false;
    }
    if (board[i][j] == 1) {
      return false;
    } else {
      return true;
    }
  };
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == 0) {
        if (check0(i - 1, j) || check0(i + 1, j) || check0(i, j - 1) ||
            check0(i, j + 1)) {
          cnt0++;
        }
      }
    }
  }
  cout << cnt0 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
