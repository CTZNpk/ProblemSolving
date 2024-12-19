#include <bits/stdc++.h>

using namespace std;

void sol() {
  int a, b;
  cin >> a >> b;
  int n = 3;
  cout << n << "\n";
  int req = a * 3;
  req -= 2*b;
  cout << b << " " << b << " " << req << "\n";
}

int main(int argc, char *argv[]) {
  sol();
  return 0;
}
