
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n), cnt(n + 1);
  for (auto &i : a) {
    cin >> i;
    cnt[i]++;
  }
  ll ans = 0;
  int smaller = 0;
  for (int i = 0; i <= n; i++) {
    ans += 1ll * cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
    ans += 1ll * cnt[i] * (cnt[i] - 1) / 2 * smaller;
    smaller += cnt[i];
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
