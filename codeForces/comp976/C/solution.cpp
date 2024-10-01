
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;

  map<tuple<int, int, int>, int> mp;
  mp[{0, 0, 0}] = 0;
  mp[{0, 0, 1}] = 1;
  mp[{0, 1, 0}] = 0;
  mp[{0, 1, 1}] = -1;
  mp[{1, 0, 0}] = -1;
  mp[{1, 0, 1}] = 0;
  mp[{1, 1, 0}] = 1;
  mp[{1, 1, 1}] = 0;

  while (tt--) {
    ll a = 0, b, c, d;
    cin >> b >> c >> d;
    for (int i = 0; i < 60; i++) {
      ll I = ((1ll << i) & b) != 0;
      ll J = ((1ll << i) & c) != 0;
      ll K = ((1ll << i) & d) != 0;
      int X = mp[{I, J, K}];
      if (X == -1) {
        a = -1;
        break;
      } else {
        a += X * (1ll << i);
      }
    }
    cout << a << "\n";
  }

  return 0;
}
