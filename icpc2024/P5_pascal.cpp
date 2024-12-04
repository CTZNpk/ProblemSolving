#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

inline int next() {
  int x;
  cin >> x;
  return x;
}

ll fact(int n) {
  ll result = 1;
  for (int i = 2; i <= n; ++i) {
    result *= i;
  }
  return result;
}

ll solve(ll n, ll r, ll x, ll y) {
  ll k = r - 1;
  ll coeff = fact(n) / (fact(k) * fact(n - k));

  ll value = coeff * (ll)std::pow(x, n - (r - 1)) * (ll)std::pow(y, r - 1);

  return value;
}

int main() {
  std::ios_base::sync_with_stdio(false);

  int t = next();

  while (t--) {
    ll n = next();
    ll r = next();
    ll x = next();
    ll y = next();

    ll value = solve(n, r, x, y);
    cout << value << '\n';
  }
}

/*

2
5
3
2 3
4
2
1 2

*/
