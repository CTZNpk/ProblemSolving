
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  bool f = false;
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    if (f) {
      if (s[i] == '.') {
        ans += '1';
      } else {
        ans += '2';
      }
      f = false;
    } else {
      if (s[i] == '-') {
        f = true;
      } else {
        ans += '0';
      }
    }
  }

  cout << ans << "\n";
  return 0;
}
