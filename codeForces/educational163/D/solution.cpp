
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(), v.end()

bool check(string s, int len) {
  int pairs = 0;
  int halfLen = len / 2;
  for (int i = 0; i < halfLen; i++) {
    if (s[i] == s[i + halfLen] || s[i] == '?' || s[i + halfLen] == '?') {
      pairs++;
    }
  }
  if (pairs == halfLen) {
    return true;
  }
  for (int i = 1; i <= s.length() - len; i++) {
    if (s[halfLen + i - 1] != '?') {
      if (s[halfLen + i - 1] == s[i - 1] || s[i - 1] == '?') {
        pairs--;
      }
      if (s[halfLen + i - 1] == s[len + i - 1] || s[len + i - 1] == '?') {
        pairs++;
      }
    }
    if (pairs == halfLen) {
      return true;
    }
  }
  return false;
}

void sol() {
  string s;
  cin >> s;
  int n = s.length();
  if (n % 2) {
    n--;
  }

  for (int i = n; i > 0; i -= 2) {
    if (check(s, i)) {
      cout << i << "\n";
      return;
    }
  }
  cout << 0 << "\n";
}
int main(int argc, char *argv[]) {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
