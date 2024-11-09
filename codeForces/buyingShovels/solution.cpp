#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>

void sol() {
  ll n, k;
  cin >> n >> k;
  ll highestDiv = 1;
  if (k >= n) {
    cout << 1 << "\n";
    return;
  }

  for (ll i = 2; i * i <= n; i++) {
    if (i > k)
      break;

    if (n % i == 0) {
      if (n / i <= k) {
        highestDiv = n / i;
        break;
      } else {
        highestDiv = i;
      }
    }
  }
  cout << n / highestDiv << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
