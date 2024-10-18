
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vector<string> r(2);
  for (auto &i : r) {
    cin >> i;
  }
  vector<vi> dp = vector<vector<int>>(4, vi(n + 1, 0));

  auto f = [&](int tR, int pos, auto &&self) -> int {
    // cout << tR << " " << pos << "\n";
    if (pos == n - 1 && (tR == 1 || tR == 3)) {
      dp[tR][pos] = 1;
      return 1;
    }
    if (dp[tR][pos] != 0) {
      return dp[tR][pos];
    }
    int find = -1;
    dp[tR][pos] = find;
    if (tR < 2) {
      if (tR == 0) {
        find = max(find, self(3, pos, self));
      }
      if (pos > 0) {
        find = max(find, self(tR + 2, pos - 1, self));
      }
      if (pos < n - 1) {
        find = max(find, self(tR + 2, pos + 1, self));
      }
      if (tR == 1) {
        find = max(find, self(2, pos, self));
      }
    } else {
      tR -= 2;
      if (r[tR][pos] == '<') {
        find = max(find, self(tR, pos - 1, self));

      } else {
        find = max(find, self(tR, pos + 1, self));
      }
    }
    dp[tR][pos] = find;
    return find;
  };
  if (f(0, 0, f) == 1)
    cout << "YES" << "\n";
  else
    cout << "NO\n";
}
int main(int argc, char *argv[]) {

  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
