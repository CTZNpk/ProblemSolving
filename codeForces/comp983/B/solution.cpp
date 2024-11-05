
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void sol() {
  int n, k;
  cin >> n >> k;
  if (n == 1) {
    if (k == 1) {
      cout << 1 << "\n";
      cout << 1 << "\n";

    } else {
      cout << -1 << "\n";
    }
    return;
  }

  if (k == 1 || k == n) {
    cout << -1 << "\n";
    return;
  }

  cout << 3 << "\n";
  if (k % 2 == 0) {
    cout << 1 << " " << k << " " << k + 1 << "\n";
  } else {
    cout << 1 << " " << k - 1 << " " << k + 2 << "\n";
  }
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
