#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  ll highest = -1;
  ll secondHighest = -1;
  int secondHighestLoc = -1;
  int highestLoc = -1;

  for (int i = 0; i < n; i++) {
    ll k;
    cin >> k;
    if (k >= highest) {
      secondHighest = highest;
      secondHighestLoc = highestLoc;
      highestLoc = i;
      highest = k;
    } else if (k >= secondHighest) {
      secondHighest = k;
      secondHighestLoc = i;
    }
  }
  cout << secondHighestLoc + 1;

  return 0;
}
