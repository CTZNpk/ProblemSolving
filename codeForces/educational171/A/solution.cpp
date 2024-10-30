#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int x, y, k;
  cin >> x >> y >> k;
  int mini = min(x, y);
  cout << 0 << " " << 0 << " " << mini << " " << mini << "\n";
  cout << 0 << " " << mini << " " << mini << " " << 0 << "\n";
}

int main(int argc, char *argv[]) {

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
