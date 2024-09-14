#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int fLvl = 0;
  int lpos = -1, rpos = -1;
  for (int i = 0; i < n; i++) {
    int p;
    char s;
    cin >> p >> s;
    if (s == 'L') {
      if (lpos == -1) {
        lpos = p;
      } else {
        fLvl += abs(lpos - p);
        lpos = p;
      }
    } else {
      if (rpos == -1) {
        rpos = p;
      } else {
        fLvl += abs(rpos - p);
        rpos = p;
      }
    }
  }
  cout << fLvl << "\n";

  return 0;
}
