
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 1) {
    cout << 1 << "\n";
    return;
  }
  vi buff;
  ll cnt = 0;
  int cntZeros = 0;
  int pairer = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == '1' && i > pairer) {
      pairer++;
    } else {
      cnt += i + 1;
      pairer = max(pairer - 1, 0);
    }
  }
  cout << cnt << "\n";
}

int main(int argc, char *argv[]) {

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
