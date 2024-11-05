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
  for (int i = 1; i < n; i++) {
    if (abs(a[i] - a[i - 1]) != 5 && abs(a[i] - a[i - 1]) != 7) {
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
