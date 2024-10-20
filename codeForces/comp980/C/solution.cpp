
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;

  vector<pair<ll, ll>> in;
  for (int i = 0; i < n; i++) {
    ll f, s;
    cin >> f >> s;
    in.push_back({f, s});
  }
  sort(all(in), [&](pair<ll, ll> one, pair<ll, ll> second) {
    if (min(one.first, one.second) < min(second.first, second.second)) {
      return true;
    } else if (min(one.first, one.second) == min(second.first, second.second)) {
      return max(one.first, one.second) < max(second.first, second.second);
    } else {
      return false;
    }
  });

  for (auto &i : in) {
    cout << i.first << " " << i.second << " ";
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
