#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  vi d(3);
  for (auto &i : d) {
    cin >> i;
  }
  sort(all(d));
  cout << abs(d[0] - d[1]) + abs(d[1] - d[2]) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }
  return 0;
}
