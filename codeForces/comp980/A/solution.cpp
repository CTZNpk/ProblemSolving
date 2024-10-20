#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll a, b;
  cin >> a >> b;
  if (a > b) {
    cout << a << "\n";
    return;
  }
  a *= 2;
  cout << max(a - b, 0ll) << endl;
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
