
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

ll binExpo(ll a, ll p, ll m) {
  a %= m;
  ll result = 1;
  while (p) {
    if (p & 1) {
      result = (result * a) % m;
    }
    a = (a * a) % m;
    p >>= 1;
  }
  return result;
}

int main(int argc, char *argv[]) {

  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int t;
  cin >> t;
  vi n(t);
  vi k(t);

  for (auto &i : n) {
    cin >> i;
  }
  for (auto &i : k) {
    cin >> i;
  }
  for (int i = 0; i < t; i++) {
    ll n_i = n[i];
    ll k_i = k[i];
    if (n_i == k_i || k_i == 0) {
      cout << 1 << "\n";
    } else {
      cout << binExpo(2, k_i, 1e9 + 7) << "\n";
    }
  }

  return 0;
}
