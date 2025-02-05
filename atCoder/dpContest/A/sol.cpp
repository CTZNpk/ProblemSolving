#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  vi dp(n, 0);
  dp[n - 2] = abs(a[n - 1] - a[n - 2]);

  for (int i = n - 3; i >= 0; i--) {
    dp[i] =
        min(abs(a[i] - a[i + 1]) + dp[i + 1], abs(a[i] - a[i + 2]) + dp[i + 2]);
  }
  cout << dp[0] << "\n";
  return 0;
}
