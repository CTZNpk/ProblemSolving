#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

void sol() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  for (int i = 0; i < n; i++) {
    bool f = true;
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      if (abs(a[i] - a[j]) % k == 0) {
        f = false;
        break;
      }
    }
    if (f) {
      cout << "YES\n";
      cout << i + 1 << "\n";
      return;
    }
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
