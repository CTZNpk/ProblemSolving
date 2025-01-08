
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n, x, y;
  cin >> n >> x >> y;
  vi ans(n, -1);

  x--, y--;
  int mn = min(x, y), mx = max(x, y);
  ans[mn] = 0;
  ans[mx] = 1;
  int i = mn - 1;
  if (i > -1) {
    while (i >= 0) {
      ans[i] = !ans[i + 1];
      i--;
    }
    i = 0;
    if (ans[n - 1] != -1) {
      if (ans[i + 1] == 1) {
        ans[i] = 0;
      } else {
        ans[i] = 2;
      }
    }
  }

  i = mn + 1;
  if (i != mx) {
    while (i < mx - 1) {
      ans[i] = !ans[i - 1];
      i++;
    }
    if (ans[i - 1] == 0) {
      ans[i] = 2;
    } else {
      ans[i] = 0;
    }
  }
  i = mx + 1;

  if (i < n) {
    while (i < n - 1) {
      ans[i] = !ans[i - 1];
      i++;
    }
    if (ans[i - 1] == 0 && ans[0] == 0) {
      ans[i] = 1;
    } else if (ans[i - 1] == 0 && ans[0] == 1) {
      ans[i] = 2;
    } else if (ans[i - 1] == 1 && ans[0] == 0) {
      ans[i] = 2;
    } else {
      ans[i] = 0;
    }
  }
  for (auto &i : ans) {
    cout << i << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
