#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll l, r, k;
  cin >> l >> r >> k;

  ll fR = r, fL = l;
  r = 10000000001;
  l = 0;
  while (abs(r - l) > 1) {
    ll mid = (r + l) / 2;
    if (mid * k <= fR) {
      l = mid;
    } else {
      r = mid;
    }
  }
  if (l - fL + 1 < 0) {
    cout << 0 << "\n";
  } else {
    cout << l - fL + 1 << "\n";
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
