

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, x;
  cin >> n >> x;

  ll ans = 0;

  for (int a = 1; a <= min(x, n); a++) {
    for (int b = 1; a * b <= n && (a + b) <= x; b++) {
      ans += min(x - a - b, (n - a * b) / (a + b));
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
