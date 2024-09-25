#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int locI, locJ;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int k;
      cin >> k;
      if (k == 1) {
        locI = i;
        locJ = j;
      }
    }
  }
  cout << abs(locI - 2) + abs(locJ - 2);

  return 0;
}
