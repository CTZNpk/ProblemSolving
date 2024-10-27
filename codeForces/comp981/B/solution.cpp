
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vector<vi> a(n, vi(n, 0));
  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  auto increaseDiag = [&](int i, int j) {
    int k = 1;
    int inc = abs(a[i][j]);
    a[i][j] = 0;
    while (k < n) {
      bool f = true;
      if (i + k < n && j + k < n) {
        a[i + k][j + k] += inc;
        f = false;
      }
      if (i - k >= 0 && j - k >= 0) {
        a[i - k][j - k] += inc;
        f = false;
      }
      if (f) {
        break;
      }
      k++;
    }
    return inc;
  };

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] < 0) {
        ans += increaseDiag(i, j);
      }
    }
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
