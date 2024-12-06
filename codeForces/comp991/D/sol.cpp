#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void bubbleSort(string &s) {
  int n = s.size();

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {

      if (s[j] + 1 < s[j + 1]) {
        s[j + 1]--;
        swap(s[j], s[j + 1]);
      }
    }
  }
}

void sol() {
  string s;
  cin >> s;
  bubbleSort(s);
  cout << s << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
  return 0;
}
