#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int c = 0;
  while (n--) {
    string s;
    cin >> s;
    if (s == "Takahashi") {
      c++;
    }
  }
  cout << c;

  return 0;
}
