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
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vll suff(n + 1);
  suff[n] = 0;
  ll ans = 0;
  for (int i = n - 1; i >= 0; i--) {
    suff[i] = suff[i + 1] + a[i];
    ans += (i + 1) * a[i];
  }
  for (int i = 1; i < n; i++) {
    if (suff[i] < 0) {
      ans -= suff[i];
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
