#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, k;
  cin >> n >> k;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vector<pair<ll, int>> x(n);
  for (int i = 0; i < n; i++) {
    ll k;
    cin >> k;
    x[i] = {abs(k), i};
  }
  sort(all(x));

  int i = 0;
  int j = 0;
  while (i != n) {
    ll left = k;
    while (i < n && left) {
      pair<ll, int> curr = x[i];
      a[curr.second] -= left;
      if (a[curr.second] <= 0) {
        left = abs(a[curr.second]);
        i++;
      } else {
        break;
      }
    }
    if (i == n)
      break;
    j++;
    if (x[i].first - j == 0) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}
int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
