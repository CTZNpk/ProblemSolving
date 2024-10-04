#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  sort(all(a));
  ll res = 1ll << 60;
  for (int i = 0; i <= k; i++) {
    res = min(res, a[i + (n - k) - 1] - a[i]);
  }
  cout << res << "\n";

  return 0;
}
