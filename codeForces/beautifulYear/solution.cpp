#include <bits/stdc++.h>

using namespace std;

bool checkBeauty(int n) {
  int arr[4];
  for (int i = 0; i < 4; i++) {
    arr[i] = (n / pow(10, 3 - i));
    arr[i] %= 10;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      if (arr[i] == arr[j]) {
        return false;
      }
    }
  }
  return true;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int i = n + 1;
  while (true) {
    if (checkBeauty(i)) {
      cout << i << "\n";
      break;
    }
    i++;
  }

  return 0;
}
