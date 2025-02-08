#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  vi b(n);
  for (auto &i : a) {
    cin >> i;
  }

  for (auto &i : b) {
    cin >> i;
  }

  sort(all(a));
  sort(all(b));

  int distA = 1;
  int distB = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] != a[i - 1]) {
      distA++;
    }
    if (b[i] != b[i - 1]) {
      distB++;
    }
  }

  if (distA + distB > 3) {
    cout << "YES\n";
    return;
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
