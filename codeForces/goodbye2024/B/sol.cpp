
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vi l(n);
  vi r(n);
  vi cov(2 * n + 1, 0);
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
    if (l[i] == r[i]) {
      cov[l[i]]++;
    }
  }
  vi nextNotOne(2 * n + 1);
  int prevNotOne = 2 * n + 1;
  for (int i = 2 * n; i >= 0; i--) {
    nextNotOne[i] = prevNotOne;
    if (cov[i] == 0) {
      prevNotOne = i;
    }
  }
  string ans = "";
  for (int i = 0; i < n; i++) {
    if (l[i] == r[i]) {
      cov[l[i]]--;
    }
    int st = l[i], ed = r[i];
    if (cov[st] == 0) {
      ans += '1';
    } else {
      if (nextNotOne[st] <= ed) {
        ans += '1';

      } else {
        ans += '0';
      }
    }
    if (l[i] == r[i]) {
      cov[l[i]]++;
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
