
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

int tt;

void sol() {
  int k, n;
  cin >> n >> k;
  ll l = 1, r = n;
  ll ans = 0;

  int m = 0;
  while (r >= k) {
    m = (r + 1) / 2;
    if (r % 2) {
      r = m;
    } else {
      r = m;
    }
    cout << r << "\n";
  }

  l = 1, r = n;
  for (l = m; l <= r; l += m) {
    ans += l;
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
