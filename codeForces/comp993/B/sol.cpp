#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  string s;
  cin >> s;
  string t;

  for (int i = s.length() - 1; i >= 0; i--) {
    if (s[i] == 'p') {
      t += 'q';
    } else if (s[i] == 'w') {
      t += 'w';
    } else {
      t += 'p';
    }
  }
  cout << t << "\n";
}

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
}
