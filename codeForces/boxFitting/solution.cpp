#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, w;
  cin >> n >> w;

  multiset<ll> wid;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    wid.insert(x);
  }
  int h = 1, left = w;
  while (wid.size()) {
    auto it = wid.upper_bound(left);
    if (it == wid.begin()) {
      h++;
      left = w;
    } else {
      left -= *(--it);
      wid.erase(it);
    }
  }
  cout << h << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
