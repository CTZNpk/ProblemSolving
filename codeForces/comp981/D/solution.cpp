
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  set<ll> prev;
  prev.insert(0);
  ll sum = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    if (prev.count(sum) || a[i] == 0) {
      sum = 0;
      prev.clear();
      cnt++;
      prev.insert(0);
    } else {
      prev.insert(sum);
    }
  }
  cout << cnt << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
