#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

void sol() {
  int a, b;
  cin >> a >> b;
  int g = gcd(a, b);
  a /= g;
  b /= g;
  cout << g * a * b << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
