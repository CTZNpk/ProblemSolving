#include <bits/stdc++.h>

using namespace std;

typedef long double ll;

inline int next() {
  int x;
  cin >> x;
  return x;
}

ll solve(vector<ll> &h, vector<ll> &as) {
  int v = 0;
  while (true) {
    int a = h.size();
    int bs = as.size();
    int b = min(a, bs);
    if (a == 0 || bs == 0)
      return v;

    float c = 1.0 / (a + b);
    for (int i = 0; i < a; i++)
      h[i] -= c;

    for (int i = 0; i < bs; i++)
      as[i] -= c;

    // Remove dead heroes
    for (int i = a - 1; i >= 0; i--) {
      if (h[i] <= 0)
        h.erase(h.begin() + i);
    }
    // Remove inactive artifacts
    for (int i = bs - 1; i >= 0; i--) {
      if (as[i] <= 0)
        as.erase(as.begin() + i);
    }
    v++;
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);

  int q = next();

  vector<ll> heros;
  vector<ll> ars;

  while (q--) {
    int t = next();
    ll v = next();
    if (t % 2 == 0) {
      ars.push_back(v);
    } else {
      heros.push_back(v);
    }

    sort(heros.begin(), heros.end(), greater<ll>());
    sort(ars.begin(), ars.end(), greater<ll>());

    ll value = solve(heros, ars);
    cout << value << '\n';
  }
}
