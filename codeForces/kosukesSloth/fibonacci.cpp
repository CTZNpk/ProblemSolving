#include <bits/stdc++.h>

using namespace std;
#define ll long long

const ll MOD = 1e9 + 7;

pair<ll, ll> fibo(ll n) {
  if (n == 0)
    return {0, 1};

  pair<ll, ll> p = fibo(n >> 1);
  ll c = p.first * ((2 * p.second % MOD - p.first) % MOD) % MOD;
  ll d = p.first * p.first % MOD + p.second * p.second % MOD;
  if (n & 1)
    return {d % MOD, (c + d) % MOD};
  else
    return {c % MOD, d % MOD};
}

int main(int argc, char *argv[]) {
  ll n;
  cin >> n;
  cout << fibo(n).first;

  return 0;
}
