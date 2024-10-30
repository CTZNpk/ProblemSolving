
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

ll M = 1e9 + 7;

ll powm(ll n, ll p) {
  ll ans = 1;
  n %= M;
  while (p) {
    if (p & 1) {
      ans = (ans * n) % M;
    }
    n = (n * n) % M;
    p >>= 1;
  }
  return ans;
}

void sol() {
  int n;
  cin >> n;
  vll a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  stack<pair<ll, ll>> stk;
  vll ans(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    ll c = 0;
    while (a[i] % 2 == 0) {
      a[i] /= 2;
      c++;
    }
    ans[i] = ans[i - 1];

    while (!stk.empty()) {
      if (c > 32 || stk.top().first < a[i] * (1LL << c)) {
        ll val = stk.top().first, p = stk.top().second;
        stk.pop();
        ans[i] = (ans[i] - val * powm(2, p) % M + M) % M;
        ans[i] = ans[i] + val;
        c += p;
      } else
        break;
    }
    stk.push({a[i], c});
    ans[i] = (ans[i] + a[i] * powm(2, c) % M) % M;
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
