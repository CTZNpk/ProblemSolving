
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  vi r(n);
  for (auto &i : r) {
    cin >> i;
  }

  vector<vector<int>> dp(m + 1, vector<int>(m + 1, 0));

  dp[0][0] = 0;

  vector<int> v1, v2;
  int tot = 0;
  for (int i = 0; i < n; i++) {
    if (r[i] > 0) {
      v1.push_back(r[i]);
    } else if (r[i] < 0) {
      v2.push_back(-r[i]);
    } else {
      sort(all(v1));
      sort(all(v2));
      tot++;
      for (int j = 0; j <= tot; j++) {
        if (j != 0) {
          int c1 = j - 1, c2 = tot - j;
          int val = (upper_bound(all(v1), c1) - v1.begin()) +
                    (upper_bound(all(v2), c2) - v2.begin());
          dp[tot][j] = max(dp[tot][j], dp[tot - 1][j - 1] + val);
        }
        if (j < tot) {
          int c1 = j, c2 = tot - j - 1;
          int val = (upper_bound(all(v1), c1) - v1.begin()) +
                    (upper_bound(all(v2), c2) - v2.begin());
          dp[tot][j] = max(dp[tot][j], dp[tot - 1][j] + val);
        }
      }
      v1.clear();
      v2.clear();
    }
  }
  sort(all(v1));
  sort(all(v2));
  int ans = 0;
  for (int j = 0; j <= m; j++) {
    int c1 = j, c2 = m - j;
    int val = (upper_bound(all(v1), c1) - v1.begin()) +
              (upper_bound(all(v2), c2) - v2.begin());
    ans = max(ans, dp[m][j] + val);
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  sol();

  return 0;
}
