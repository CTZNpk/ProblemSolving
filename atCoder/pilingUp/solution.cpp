#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define vi vector<int>

int main(int argc, char *argv[]) {
  int r;
  cin >> r;

  r %= 100;
  cout << 100 - r;

  return 0;
}
