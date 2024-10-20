#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int x, y, k;
  cin >> x >> y >> k;
  if (k % 2) {
    cout << x << " " << y << "\n";
    k--;
  }
  for (int i = 1; i <= k; i += 2) {
    cout << x + i << " " << y + i << "\n";
    cout << x - i << " " << y - i << "\n";
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
