
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int a, b;
  cin >> a >> b;

  vi div;

  div.push_back(1);

  if (b % 3 == 0 || a >= 3) {
    div.push_back(3);
  }
  if (b == 5) {
    div.push_back(5);
  }
  if (b == 7 || a >= 3) {
    div.push_back(7);
  }
  if (a >= 9) {
    div.push_back(9);
  } else {
    ll tot = b;

    while (a > 0) {
      tot *= a;
      a--;
    }
    if (tot % 9 == 0) {
      div.push_back(9);
    }
  }
  for (auto &i : div) {
    cout << i << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
