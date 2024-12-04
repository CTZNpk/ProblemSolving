
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  vector<vi> dp(2, vi(n, -1));

  auto f = [&](int i, int rating, bool skip, bool done, auto &&self) {
    if (dp[done][i] != -1) {
      return dp[done][i];
    }
    if (i >= n) {
      if (done == true) {
        dp[done][i] = rating;
      }
      return rating;
    }
    cout << i << " " << rating << "\n";

    if (a[i] > rating) {
      if (skip) {
        dp[done][i] = self(i + 1, rating + 1, false, true, self);
      } else {
        dp[done][i] = self(i + 1, rating + 1, skip, done, self);
      }
    } else if (a[i] == rating) {
      dp[done][i] = self(i + 1, rating, skip, done, self);
    } else {
      if (skip) {
        dp[done][i] = self(i + 1, rating, true, false, self);
      } else if (!done) {
        dp[done][i] = max(self(i + 1, rating, true, false, self),
                          self(i + 1, rating - 1, false, false, self));
      } else {
        dp[done][i] = self(i + 1, rating - 1, false, false, self);
      }
    }
    return dp[done][i];
  };

  cout << f(0, 0, false, false, f) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
