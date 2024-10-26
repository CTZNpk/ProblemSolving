#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, x, y;
  cin >> n >> x >> y;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  map<pair<ll, ll>, int> cnt;
  ll total = 0;
  for (int i = 0; i < n; i++) {
    ll xx = (a[i] % x), yy = a[i] % y;
    int count = cnt[{(x - xx) % x, yy}];
    total += count;
    cnt[{xx, yy}]++;
  }
  cout << total << "\n";
}
int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
