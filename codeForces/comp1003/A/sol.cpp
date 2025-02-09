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

  s[n - 2] = 'i';
  for (int i = 0; i < n - 1; i++) {
    cout << s[i];
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
