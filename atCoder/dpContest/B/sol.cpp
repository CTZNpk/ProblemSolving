
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>

int main(int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  vi dp(n, 0);
  dp[n - 2] = abs(a[n - 1] - a[n - 2]);

  for (int i = n - 3; i >= 0; i--) {
    dp[i] = INT_MAX;
    for (int j = 1; (i + j) < n && j <= k; j++) {
      dp[i] = min(abs(a[i] - a[i + j]) + dp[i + j], dp[i]);
    }
  }
  cout << dp[0] << "\n";
  return 0;
}
