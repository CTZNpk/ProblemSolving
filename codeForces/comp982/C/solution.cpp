
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

  vector<pair<ll, ll>> pairs;
  for (int i = 1; i < n; i++) {
    pairs.push_back({a[i] + i, i});
  }
  sort(all(pairs));
  set<ll> st;
  st.insert(n);
  for (int i = 0; i < n - 1; i++) {
    if (st.find(pairs[i].first) != st.end()) {
      st.insert(pairs[i].first + pairs[i].second);
    }
  }
  cout << *st.rbegin() << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
