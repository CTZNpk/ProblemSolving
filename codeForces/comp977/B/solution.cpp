
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;
  while (tt--) {
    ll n, x;
    cin >> n >> x;
    vll a(n);
    map<ll, int> c;
    for (auto &i : a) {
      cin >> i;
      c[i]++;
    }

    for (int i = 0; i <= n; i++) {
      if (c[i] != 0) {
        c[i + x] += c[i] - 1;
        continue;
      } else {
        cout << i << "\n";
        break;
      }
    }
  }

  return 0;
}
