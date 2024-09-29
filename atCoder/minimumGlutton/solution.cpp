#include <bits/stdc++.h>
#include <cstdio>
#include <numeric>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {

  ll n, x, y;
  cin >> n >> x >> y;

  vll a(n), b(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }

  sort(all(a), greater<>());

  ll sweet = 0;
  ll salt = 0;
  int sweInd = n;
  for (int i = 0; i < n; i++) {
    sweet += a[i];
    if (sweet > x) {
      sweInd = i + 1;
      break;
    }
  }

  int saltInd = n;
  sort(all(b), greater<>());

  for (int i = 0; i < n; i++) {
    salt += b[i];
    if (salt > y) {
      saltInd = i + 1;
      break;
    }
  }

  cout << min(saltInd, sweInd);

  return 0;
}
