#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;

  int i = 0;
  int j = 0;
  int k = 0;
  int count = 0;
  vector<pair<int, int>> loc;
  while (k < n) {
    if (s[k] == 'N') {
      j++;
    } else if (s[k] == 'E') {
      i++;
    } else if (s[k] == 'W') {
      i--;
    } else {
      j--;
    }
    loc.push_back({i, j});
    k++;
  }
  int lastI = loc.back().first, lastJ = loc.back().second;
  for (int j = 0; j <= 100; j++) {
    int addI = lastI * j, addJ = lastJ * j;
    for (int i = 0; i < n; i++) {
      if (loc[i].first + addI == a && loc[i].second + addJ == b) {
        cout << "YES\n";
        return;
      }
    }
  }
  cout << "NO\n";
}

int main(int argc, char *argv[]) {

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
