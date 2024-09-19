#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int tt;
  cin >> tt;
  string s = "narek";

  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &i : a)
      cin >> i;

    vector<vector<int>> dp(n, vector<int>(5, -1));

    auto f = [&](int i, int j, auto &&self) {
      if (i == n)
        return -2 * j;
      if (dp[i][j] != -1)
        return dp[i][j];

      int notTake = self(i + 1, j, self);
      int take = 0;
      int origJ = j;
      for (auto &k : a[i]) {
        if (k == s[j]) {
          j = (j + 1) % 5, take++;
        } else if (k == 'n' || k == 'a' || k == 'r' || k == 'e' || k == 'k') {
          take--;
        }
      }
      take += self(i + 1, j, self);
      return dp[i][origJ] = max(take, notTake);
    };

    cout << f(0, 0, f) << "\n";
  }
}
