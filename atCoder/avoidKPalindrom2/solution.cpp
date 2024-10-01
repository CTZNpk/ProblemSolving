#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define vi vector<int>

bool check_permutation(string s, int i, int j) {
  while (i <= j) {
    if (s[i] != s[j]) {
      return false;
    } else {
      i++;
      j--;
    }
  }
  return true;
}
int main(int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int count = 0;
  sort(all(s));
  do {
    int i = 0;
    int j = i + k - 1;

    bool flag = false;
    while (j < n) {
      if (check_permutation(s, i, j)) {
        flag = true;
        break;
      }
      i++;
      j++;
    }
    if (!flag) {
      count++;
    }

  } while (next_permutation(all(s)));
  cout << count << "\n";

  return 0;
}
