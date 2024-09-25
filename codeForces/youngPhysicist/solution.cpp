#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int f = 0, s = 0, t = 0;
  while (n--) {
    int k, l, m;
    cin >> k >> l >> m;
    f += k;
    s += l;
    t += m;
  }

  if (f == 0 && s == 0 && t == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
