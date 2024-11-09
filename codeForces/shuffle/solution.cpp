#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, x;
  int m;
  cin >> n >> x >> m;
  x--;

  int st = x, end = x;
  for (int i = 0; i < m; i++) {
    ll l, r;
    cin >> l >> r;
    l--, r--;
    if (st > l && st <= r) {
      st = l;
    }
    if (end >= l && end < r) {
      end = r;
    }
  }
  cout << end - st + 1 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
