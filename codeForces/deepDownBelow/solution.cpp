#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vector<pair<ll, int>> pow;
  vi k;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    k.push_back(num);
    ll powNeeded = 0;
    for (int i = 0; i < num; i++) {
      ll b;
      cin >> b;
      powNeeded = max(powNeeded, b - i + 1);
    }
    pow.push_back({powNeeded, i});
  }

  sort(all(pow));

  auto check = [&](ll p) {
    for (int i = 0; i < n; i++) {
      pair<ll, int> curr = pow[i];
      if (p >= curr.first) {
        p += k[curr.second];
      } else {
        return false;
      }
    }
    return true;
  };

  ll l = 0, r = 1e9 + 1;
  while (abs(r - l) > 1) {
    ll mid = (l + r) / 2;
    if (check(mid)) {
      r = mid;
    } else {
      l = mid;
    }
  }
  cout << l + 1 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
