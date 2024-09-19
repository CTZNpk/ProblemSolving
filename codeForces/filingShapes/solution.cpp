#include <iostream>

using namespace std;

#define ll long long

ll dp[10000];

void sol() {

  ll t;
  cin >> t;
  dp[0] = 1;
  dp[1] = 0;

  for (int i = 2; i <= t; i++) {
    dp[i] = 2 * dp[i - 2];
  }
  cout << dp[t] << "\n";
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  sol();

  return 0;
}
