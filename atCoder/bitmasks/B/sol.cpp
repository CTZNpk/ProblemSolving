#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long powMOD(long long n, long long k) {
  n %= MOD;
  long long ans = 1;
  while (k > 0) {
    if (k & 1) {
      ans = (ans * n) % MOD;
    }
    n = (n * n) % MOD;
    k >>= 1;
  }
  return ans;
}

void sol() {
  long long n, k;
  cin >> n >> k;

  long long ans = powMOD(n, k);
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
