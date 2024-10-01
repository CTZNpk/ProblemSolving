#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

ll binPow(ll k, ll n, ll &ans) {
  ll origK = k;
  while (k <= n) {
    ll prev = k;
    k *= origK;
    if (k > n) {
      n -= prev;
      ans++;
      while (n - prev > prev) {
        n -= prev;
        ans++;
      }
      return n;
    }
  }
  return n - k;
}

void sol() {
  ll n, k;
  cin >> n >> k;

  ll ans = 0;
  if (k == 1) {
    cout << n << "\n";
    return;
  }

  while (n > 0) {
    if (n < k) {
      ans += n;
      break;
    }
    n = binPow(k, n, ans);
    // cout << n << "\n";
    // cout << n << endl;
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  int tt;

  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
