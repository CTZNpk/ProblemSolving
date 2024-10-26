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
  set<ll> prev;
  prev.insert(0);
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2) {
      sum += a[i];
    } else {
      sum -= a[i];
    }
    if (prev.find(sum) != prev.end()) {
      cout << "YES\n";
      return;
    }
    prev.insert(sum);
  }
  cout << "NO\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
