#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  sort(all(a));

  for (int i = 0; i < q; i++) {
    ll b, k;
    cin >> b >> k;
    ll lo = -1, hi = 1e9 + 9;

    while (hi - lo > 1) {
      ll m = (hi + lo) / 2;
      ll c = upper_bound(all(a), b + m) - lower_bound(all(a), b - m);
      if (c >= k) {
        hi = m;
      } else {
        lo = m;
      }
    }
    cout << hi << "\n";
  }

  return 0;
}
