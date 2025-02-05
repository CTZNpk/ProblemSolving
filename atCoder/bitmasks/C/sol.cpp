#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define ll long long
#define vll vector<ll>

void sol() {
  ll n;
  cin >> n;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }

  vll bits(32, 0);

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    while (a[i]) {
      a[i] >>= 1;
      cnt++;
    }
    bits[cnt]++;
  }
  ll ans = 0;
  for (int i = 0; i < 32; i++) {
    if (bits[i] > 1)
      ans += ((bits[i]) * (bits[i] - 1)) / 2;
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
