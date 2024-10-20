
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sll set<ll>
#define si set<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, k;
  cin >> n >> k;
  sll a;
  map<ll, int> mp;
  for (int i = 0; i < n; i++) {
    ll p;
    cin >> p;
    a.insert(p);
    mp[p]++;
  }
  int i = 0;
  ll cnt = 0;
  ll prev = 0;
  for (auto &c : a) {
    ll inc = min((n - i) * (c - prev), k - cnt);

    cnt += inc;
    if (cnt >= k) {
      break;
    } else {
      i += mp[c];
    }
    prev = c;
  }
  cout << cnt + i << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
