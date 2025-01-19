#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (int i = 1; i < n; i++) {
    if (a[i - 1] <= a[i]) {
      a[i] -= a[i - 1];
    } else {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
