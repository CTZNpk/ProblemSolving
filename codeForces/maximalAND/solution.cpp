#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>

void sol() {
  ll n, k;
  cin >> n >> k;

  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    int j = 0;
    while (a) {
      if (a & 1) {
        cnt[j]++;
      }
      a >>= 1;
      j++;
    }
  }
  ll ans = 0;
  for (int i = 30; i >= 0; i--) {
    if (n - cnt[i] <= k) {
      ans += 1 << i;
      k -= n - cnt[i];
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
