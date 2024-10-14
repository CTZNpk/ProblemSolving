#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    ll n, x;
    cin >> n >> x;
    vll a(n);
    for (auto &i : a) {
      cin >> i;
    }
    sort(all(a));

    ll cnt = 0;
    int idx = n - x;
    int nxt = n;
    while (true) {
      idx = max(0ll, nxt - x);
      ll mx = 0;
      for (int i = idx; i < nxt; i++) {
        if (a[i] > mx) {
          mx = a[i];
        }
      }
      cnt += mx;
      ll debt = 0;
      for (int i = idx; i < nxt; i++) {
        debt += (mx - a[i]);
      }
      idx--;
      while (idx >= 0 && debt > 0) {
        a[idx] -= debt;
        if (a[idx] <= 0) {
          debt = abs(a[idx]);
        } else {
          break;
        }
        idx--;
      }
      if (idx < 0) {
        break;
      }
      nxt = idx + 1;
    }
    cout << cnt << "\n";
  }

  return 0;
}
