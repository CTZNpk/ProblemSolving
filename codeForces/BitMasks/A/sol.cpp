#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>

void sol() {
  int n;

  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (int i = 2; i <= 10000; i++) {
    bool isAns = false;
    bool dist1 = true;
    int distVal = a[0] % i;
    int dist2Val = -1;
    for (auto &j : a) {
      int val = j % i;
      if (!dist1 && val != dist2Val && val != dist2Val) {
        isAns = true;
        break;
      }
      if (dist1 && val != distVal) {
        dist2Val = val;
        dist1 = false;
      }
    }
    if (isAns) {
      cout << i << "\n";
      return;
    }
  }
  cout << "HERE\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
