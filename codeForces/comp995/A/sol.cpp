#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>

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

  int mx = a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    int now = a[i] - b[i + 1];
    if (now > 0) {
      mx += now;
    }
  }
  cout << mx << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
