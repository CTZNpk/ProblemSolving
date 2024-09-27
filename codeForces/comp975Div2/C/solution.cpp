
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>

ll MX = 1e10;
void sol() {
  ull n, k;
  cin >> n >> k;

  vll a(n);
  ll mn = MX;
  for (auto &i : a) {
    cin >> i;
    if (i < mn) {
      mn = i;
    }
  }

  ll l = 0;
  ll r = MX;

  while (l <= r) {
    ll mid = (r + l) / 2;
    ull needed = 0;
    for (auto i : a)
      needed += max(mid - i, 0LL);
    if (needed > k) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  cout << n / (l - 1) << "\n";
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
