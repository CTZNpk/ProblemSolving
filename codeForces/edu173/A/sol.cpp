#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  ll n;
  cin >> n;
  ll ans = 1;
  while (n > 3) {
    n /= 4;
    ans *= 2;
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
