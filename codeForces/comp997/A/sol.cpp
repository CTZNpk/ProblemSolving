#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>
#define vi vector<int>

void sol() {
  int n, m;
  cin >> n >> m;

  vi x;
  vi y;
  int i = 0;
  while (i < n) {
    int c, v;
    cin >> c >> v;
    x.push_back(c);
    y.push_back(v);
    i++;
  }

  int param = 4 * m;
  int total = 0;
  for (i = 0; i < n; i++) {
    if (i == 0) {
      total += param;
    } else {
      int curr = param;
      if (x[i] < m) {
        curr -= 2 * (m - x[i]);
      }
      if (y[i] < m) {
        curr -= 2 * (m - y[i]);
      }
      total += curr;
    }
  }
  cout << total << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
