
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;

  if (n == 1 || n == 3) {
    cout << -1 << "\n";
    return;
  }
  int k = n - 2;
  if (k % 2 == 0) {
    while (k--) {
      cout << 3;
    }
  } else {
    k -= 3;
    while (k--) {
      cout << 3;
    }
    cout << 363;
  }

  cout << 66 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
