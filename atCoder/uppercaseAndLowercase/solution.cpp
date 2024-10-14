#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < s.length(); i++) {
    if (islower(s[i])) {
      cnt--;
    } else {
      cnt++;
    }
  }
  if (cnt < 0) {
    for (int i = 0; i < s.length(); i++) {
      s[i] = tolower(s[i]);
    }
  } else {

    for (int i = 0; i < s.length(); i++) {
      s[i] = toupper(s[i]);
    }
  }

  cout << s;

  return 0;
}
