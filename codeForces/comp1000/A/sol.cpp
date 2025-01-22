#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int a, b;
  cin >> a >> b;
  if (a == 1 && b == 1) {
    cout << 1 << "\n";
    return;
  }
  cout << max(a, b) - min(a, b) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
