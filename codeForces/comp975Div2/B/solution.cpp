
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
void sol() {}
int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;

  cin >> tt;

  while (tt--) {
    int n, q;
    cin >> n >> q;

    vll a(n);
    for (auto &i : a) {
      cin >> i;
    }

    map<ll, ll> c;
    c[n - 1] += a[1] - a[0] + 1;
    ll prev = n - 1;
    for (int i = 1; i < n - 1; i++) {
      prev += n - i - 1;
      c[prev] += 1;
      prev -= i;
      c[prev] += a[i + 1] - a[i] - 1;
    }

    for (int i = 0; i < q; i++) {
      ll k;
      cin >> k;
      cout << c[k] << " ";
    }
    cout << "\n";
  }

  return 0;
}
