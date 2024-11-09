#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n;
  cin >> n;
  int k = 2;
  int p = 0;
  while (k <= 100000) {
    if (n % k == 0) {
      p = k;
      break;
    }
    k++;
  }
  if (p == 0) {
    p = n;
  }
  cout << n / p << " " << n - n / p << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
