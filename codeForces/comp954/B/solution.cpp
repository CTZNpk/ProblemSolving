

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  vector<vi> a(n, vi(m, 0));

  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  auto f = [&](int i, int j) {
    if (i > 0) {
      if (a[i - 1][j] >= a[i][j]) {
        return false;
      }
    }
    if (i < n - 1) {
      if (a[i + 1][j] >= a[i][j]) {
        return false;
      }
    }
    if (j > 0) {
      if (a[i][j - 1] >= a[i][j]) {
        return false;
      }
    }
    if (j < m - 1) {
      if (a[i][j + 1] >= a[i][j]) {
        return false;
      }
    }
    return true;
  };

  auto maxi = [&](int i, int j) {
    int mx = 0;
    if (i > 0) {
      mx = max(a[i - 1][j], mx);
    }
    if (i < n - 1) {
      mx = max(a[i + 1][j], mx);
    }
    if (j > 0) {
      mx = max(a[i][j - 1], mx);
    }
    if (j < m - 1) {
      mx = max(a[i][j + 1], mx);
    }
    return mx;
  };
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (f(i, j)) {
        a[i][j] = maxi(i, j);
      }
    }
  }

  for (auto &i : a) {
    for (auto &j : i) {

      cout << j << " ";
    }
    cout << "\n";
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
