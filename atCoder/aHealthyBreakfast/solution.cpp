#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;
  for (int i = 0; i < 3; i++) {
    if (s[i] == 'M') {
      cout << "No";
      return 0;
    }
    if (s[i] == 'R') {
      cout << "Yes";
      return 0;
    }
  }

  return 0;
}
