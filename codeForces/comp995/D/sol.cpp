
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>

void sol() {
  ll n, x, y;
  cin >> n >> x >> y;
  vll a(n);
  ll total = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }
  sort(all(a));

  // cout << "HERE\n";
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    // cout << "HERE\n";
    ll left = total - a[i];
    ll lowerNeeded = left - y;
    ll upperNeeeded = left - x;
    int lowerIdx =
        lower_bound(a.begin() + i, a.end(), lowerNeeded) - a.begin() + i;
    int upperIdx =
        upper_bound(a.begin() + i, a.end(), upperNeeeded) - a.begin() + i;
    int range = abs(lowerIdx - upperIdx);
    ans += range;
  }
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
