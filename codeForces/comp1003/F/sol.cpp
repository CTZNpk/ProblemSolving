#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m, k;
  cin >> n >> m >> k;

  if (max(n - m, m - n) > k || k > max(n, m)) {
    cout << -1 << "\n";
    return;
  }
  string ans = "";

  int tot = n + m;
  if (m < n) {
    while (ans.size() != tot) {
      int tempStop = k;
      while (tempStop--) {
        if (n == 0)
          break;
        ans += '0';
        n--;
      }
      tempStop = k;

      while (tempStop--) {
        if (m == 0)
          break;
        ans += '1';
        m--;
      }
    }
  } else {
    while (ans.size() != tot) {
      int tempStop = k;
      while (tempStop--) {
        if (m == 0)
          break;
        ans += '1';
        m--;
      }
      tempStop = k;

      while (tempStop--) {
        if (n == 0)
          break;
        ans += '0';
        n--;
      }
    }
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
