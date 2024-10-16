
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pb push_back

const int mod = 998244353;

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  sort(all(a));

  ll S = accumulate(all(a), 0LL) + 1;
  vector<vector<int>> dp(n + 1, vector<int>(S + 1));
  dp[0][0] = 1;

  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ll ai = a[i - 1];
    for (ll s = 0; s + ai < S; s++) {
      dp[i][s] = (dp[i][s] + dp[i - 1][s]) % mod;
      // if (s + ai < S) {
      dp[i][s + ai] = (dp[i][s + ai] + dp[i - 1][s]) % mod;
      ll newSum = (s + ai) % mod;
      ll bx = max((newSum + 1) / 2, ai);
      ll prod = (dp[i - 1][s] * bx) % mod;
      ans = (ans + prod) % mod;
      // }
    }
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  sol();

  return 0;
}
