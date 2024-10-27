#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, m, r, c;
  cin >> n >> m >> r >> c;

  ll cnt = 0;
  if (r < n) {
    ll down = m * (n - r);
    ll next = (m - 1) * (n - r);
    cnt += down;
    cnt += next;
  }
  cnt += m - c;
  cout << cnt << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
