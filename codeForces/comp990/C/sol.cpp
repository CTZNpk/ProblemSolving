
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vector<vi> a(2, vi(n, 0));
  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }
  int mxNonMx = -1e6;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[0][i] > a[1][i]) {
      ans += a[0][i];
      if (a[1][i] > mxNonMx) {
        mxNonMx = a[1][i];
      }
    } else {
      ans += a[1][i];
      if (a[0][i] > mxNonMx) {
        mxNonMx = a[0][i];
      }
    }
  }
  cout << ans + mxNonMx << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
