#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<long long>
#define vi vector<int>

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll N;
  cin >> N;

  ll t = 0;
  for (int i = 0; i < N; i++) {
    ll in;
    cin >> in;
    ll k = in / 5;
    t += k * 3;
    in -= k * 5;
    while (in > 0) {
      t++;
      if (t % 3 == 0) {
        in -= 3;
      } else {
        in -= 1;
      }
    }
  }
  cout << t << "\n";
}
