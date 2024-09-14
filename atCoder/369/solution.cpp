#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << 1 << "\n";
  } else if ((a - b) % 2 == 0) {
    cout << 3 << "\n";

  } else {
    cout << 2 << "\n";
  }

  return 0;
}
