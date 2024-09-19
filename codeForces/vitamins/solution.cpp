#include <iostream>

using namespace std;

#define ll long long

void sol() {
  int n;
  cin >> n;

  ll dp[n + 1][8];

  ll a[n + 1];

  ll const inf = 1e17;

  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < 8; j++) {
      dp[i][j] = inf;
    }
  }
  dp[0][0] = 0;
  for (int i = 0; i < n; i++) {
    int p;
    string s;
    cin >> p >> s;

    int stringMask = 0;
    for (int j = 0; j < 3; j++) {
      char c = 'C' - j;
      bool have = 0;
      for (char d : s) {
        if (c == d) {
          have = 1;
        }
      }
      if (have) {
        stringMask += (1 << j);
      }
    }
    for (int mask = 0; mask < 8; mask++) {
      dp[i + 1][mask] = min(dp[i + 1][mask], dp[i][mask]);
      dp[i + 1][mask | stringMask] =
          min(dp[i + 1][stringMask | mask], dp[i][mask] + p);
    }
  }
  ll ans = dp[n][7];
  if (ans == inf)
    ans = -1;
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  sol();

  return 0;
}
