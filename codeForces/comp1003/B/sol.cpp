#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  string s;
  cin >> s;

  int n = s.length();
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      cout << 1 << "\n";
      return;
    }
  }
  cout << n << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}

