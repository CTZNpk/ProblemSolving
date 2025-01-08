
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool foundP = false;
  bool foundS = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'p') {
      foundP = true;
      if (foundS && i != n - 1) {
        cout << "NO\n";
        return;
      }
    }
    if (s[i] == 's' && i != 0) {
      foundS = true;
    }
    if (foundP && s[i] == 's') {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
