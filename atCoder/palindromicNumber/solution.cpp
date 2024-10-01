#include <bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long

int main(int argc, char *argv[]) {
  ll N;
  cin >> N;
  if (N == 1) {
    cout << 0 << "\n";
    return 0;
  }
  N--;
  for (int d = 1;; d++) {
    int x = (d + 1) / 2;
    if (N <= 9 * powl(10, x - 1)) {
      string s = to_string(powl(10, x - 1) + N - 1);
      s.resize(d, ' ');
      for (int i = x; i < d; i++)
        s[i] = s[d - 1 - i];
      cout << s << "\n";
      return 0;
    } else {
      N -= 9 * powl(10, x - 1);
    }
  }

  return 0;
}
