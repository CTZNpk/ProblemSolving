#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }

  vll aj;
  vi indices;
  for (int i = 0; i < n; i++) {
    if (a[i] < i + 1) {
      aj.push_back(a[i]);
      indices.push_back(i + 1);
    }
  }
  ll ans = 0;
  for (auto &i : aj) {
    ans += (int)(lower_bound(all(indices), i) - indices.begin());
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
