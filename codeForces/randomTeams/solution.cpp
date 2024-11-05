#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(int argc, char *argv[]) {
  ll n, m;
  cin >> n >> m;

  ll mx = (n - m + 1) * (n - m) / 2;
  ll first = n / m;
  ll second = n % m;
  ll ans1 = (first) * (first - 1) / 2;
  ll ans2 = (first) * (first + 1) / 2;
  ll mn = (m - second) * ans1 + second * ans2;
  cout << mn << " " << mx << "\n";

  return 0;
}
