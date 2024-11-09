#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n;
  cin >> n;

  for (int i = 2; i * i < n; i++) {
    if (n % i == 0) {
      for (int j = 2; j * j < n / i; j++) {
        if (n / i % j == 0 && j != i && (n / i) / j != i) {
          cout << "YES\n";
          cout << i << " " << (n / i) / j << " " << j << "\n";
          return;
        }
      }
      for (int j = 2; j * j < i; j++) {
        if (i % j == 0 && j != n / i && i / j != n / i) {
          cout << "YES\n";
          cout << n / i << " " << i / j << " " << j << "\n";
          return;
        }
      }
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
