#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, m;
  cin >> n >> m;
  vector<vll> board(n, vll(m));
  for (auto &i : board) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  vector<vll> dp(n + 1, vll(m + 1, -1));

  auto check = [&](int i, int j, auto &&self) -> ll {
    if (dp[i][j] != -1) {
      return dp[i][j];
    }
    if (i == n - 1 && j == m - 1) {
      dp[i][j] = board[i][j];
      return dp[i][j];
    }
    ll mx = 0;

    if (i < n - 1) {
      mx = max(mx, self(i + 1, j, self));
    }
    if (j < m - 1) {
      mx = max(mx, self(i, j + 1, self));
    }
    dp[i][j] = mx + board[i][j];
    return dp[i][j];
  };

  cout << check(0, 0, check) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}

/*
2
4 3
10 160 70 50
70 111 111 0
1 2
2 3
3 4
2 1
143 420
214 349
2 1


 */
