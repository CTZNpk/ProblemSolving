#include <bits/stdc++.h>

using namespace std;

#define ll long long

void sol() {
  ll k, x;
  cin >> k >> x;

  ll tot = k * (k + 1) / 2 + k * (k - 1) / 2;
  ll ans = 0;
  if (x <= k * (k + 1) / 2) {
    int l = 1;
    int r = k;
    while (abs(r - l) > 1) {
      int mid = (r + l) / 2;
      if (mid * (mid + 1) / 2 >= x) {
        r = mid;
      } else {
        l = mid;
      }
    }
    ans = l + 1;
  } else {
    ans += k;
    x -= k * (k + 1) / 2;
    ll n = k * (k - 1) / 2;
    ll l = 1;
    ll r = k - 1;
    while (abs(r - l) > 1) {
      int mid = (r + l) / 2;
      if (n - mid * (mid + 1) / 2 >= x) {
        r = mid;
      } else {
        l = mid;
        n = l * (l + 1) / 2;
      }
    }
    ans += k - l;
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
