#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  string a, b, c;
  cin >> a >> b >> c;

  int n1 = a.length();
  int n2 = b.length();
  int n3 = c.length();
  vector<vi> dp(1001, vi(1001, -1));
  auto select = [&](int i1, int i2, auto &self) -> int {
    if (dp[i1][i2] != -1) {
      return dp[i1][i2];
    }
    if (i1 == n1) {
      int cnt = 0;
      while (i1 + i2 < n3) {
        if (b[i2] != c[i1 + i2]) {
          cnt++;
        }
        i2++;
      }
      dp[i1][i2] = cnt;
      return cnt;
    }
    if (i2 == n2) {
      int cnt = 0;
      while (i1 + i2 < n3) {
        if (a[i1] != c[i1 + i2]) {
          cnt++;
        }
        i1++;
      }
      dp[i1][i2] = cnt;
      return cnt;
    }

    int leftCall = self(i1 + 1, i2, self) + (a[i1] != c[i1 + i2] ? 1 : 0);
    int rightCall = self(i1, i2 + 1, self) + (b[i2] != c[i1 + i2] ? 1 : 0);
    dp[i1][i2] = min(leftCall, rightCall);
    return dp[i1][i2];
  };
  cout << select(0, 0, select) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
  return 0;
}
