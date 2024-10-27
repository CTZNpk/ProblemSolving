
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vll oddSum(n);
  vll pow(n);

  if (a[0] % 2) {
    oddSum[0] = a[0];
    pow[0] = 1;
  } else {
    ll lg = log2(a[0]);
    pow[0] = powl(2, lg);
    oddSum[0] = a[0] / lg;
  }

  for (int i = 1; i < n; i++) {
    if (a[i] % 2) {
      oddSum[i] = a[i] + oddSum[i - 1];
      pow[i] = pow[i - 1];
    } else {
      ll val = a[i];
      ll p = 1;
      while (val % 2 == 0) {
        val /= 2;
        p *= 2;
      }

      pow[i] = pow[i - 1] * p;
      oddSum[i] = oddSum[i - 1] + val;
    }
  }
  cout << a[0] << " ";
  for (int i = 1; i < n; i++) {
    cout << a[i] * pow[i - 1] + oddSum[i - 1] << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
