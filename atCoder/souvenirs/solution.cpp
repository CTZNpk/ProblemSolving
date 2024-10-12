#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define sll multiset<ll>

int main(int argc, char *argv[]) {
  ll m, n;
  sll a;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    a.insert(k);
  }
  ll c = 0;
  for (int j = 0; j < m; j++) {
    ll k;
    cin >> k;
    auto val = a.lower_bound(k);
    if (val == a.end()) {
      cout << -1;
      return 0;
    } else {
      c += *val;
      a.erase(val);
    }
  }

  cout << c << "\n";
  return 0;
}


