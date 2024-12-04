#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  map<int, int> m;

  for (auto &i : a) {
    cin >> i;
    m[i]++;
  }
  vi seconds;
  for (auto &i : m) {
    seconds.push_back(i.second);
  }
  sort(all(seconds));
  bool prev1 = false;
  int score = 0;

  for (int i = 0; i < seconds.size(); i++) {
    if (seconds[i] == 1) {
      if (!prev1) {
        score += 2;
        prev1 = true;
      } else {
        prev1 = false;
      }
    } else {
      score += 1;
    }
  }
  cout << score << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}

