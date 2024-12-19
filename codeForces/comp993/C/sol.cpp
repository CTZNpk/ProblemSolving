#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int m, a, b, c;
  cin >> m >> a >> b >> c;
  int cnt = 0;
  int firstRow = max(0, m - a);
  int secondRow = max(0, m - b);

  cnt += m - firstRow;
  cnt += m - secondRow;
  int initC = c;
  c = max(0, c - firstRow);
  c = max(0, c - secondRow);
  cnt += initC - c;
  cout << cnt << "\n";
}

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
}
