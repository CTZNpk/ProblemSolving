#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;

void sol() {
  ll N, K;
  cin >> N >> K;
  ll f = 1 % K, s = 1 % K, cnt = 1;
  while (f != 0) {
    ll temp = (f + s) % K;
    f = s;
    s = temp;
    cnt++;
  }
  cout << (N % MOD) * (cnt % MOD) % MOD << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
