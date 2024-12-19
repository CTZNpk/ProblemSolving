#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  ll k, l1, r1, l2, r2;
  cin >> k >> l1 >> r1 >> l2 >> r2;
  l2 = max(l1, l2);
  r1 = min(r1, r2);

  ll x = l1;

  ll b = 0, t = 60;

  while (abs(b - t) > 1) {
    ll mid = (b + t) / 2;
    if (x * pow(k, mid) > r2) {
      t = mid;
    } else {
      b = mid;
    }
  }
  int currPow = b;
  ll ans = 0;

  for (int i = l1; i <= r2; i++) {
    if (i * pow(k, currPow) > r2) {
      currPow--;
    }
    ans += currPow;
  }
  cout << ans << "\n";
}

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
}
