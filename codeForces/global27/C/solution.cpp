
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  iota(all(a), 1);
  ll k = 0;
  if (n % 2) {
    k = n;
  } else {

    ll t = pow(2, (int)log2(n));
    k = n | (t - 1);
    if (a[t - 2] != a[n - 2]) {
      swap(a[n - 1], a[t - 2]);
    }
  }
  swap(a[0], a[1]);
  cout << k << "\n";
  for (auto &i : a) {
    cout << i << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
