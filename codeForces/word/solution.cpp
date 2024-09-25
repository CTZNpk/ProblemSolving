#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {

  string s;
  cin >> s;

  int lC = 0;
  int uC = 0;
  for (int i = 0; i < s.length(); i++) {
    if (isupper(s[i])) {
      uC++;
    } else {
      lC++;
    }
  }

  if (uC > lC) {
    for (int i = 0; i < s.length(); i++) {
      s[i] = toupper(s[i]);
    }
    cout < < < < "\n";
  }

  return 0;
}
