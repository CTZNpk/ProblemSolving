#include <iostream>
#include <vector>

using namespace std;

bool solution(vector<int> in, int k) {
  for (int i = 0; i < k - 2; i++) {
    if (in[i] != 0) {
      int l = in[i];
      in[i] = 0;
      if (in[i + 1] < 2 * l || in[i + 2] < l) {
        return false;
      }
      in[i + 1] -= 2 * l;
      in[i + 2] -= l;
    }
    // for (auto j : in) {
    //   cout << j << " ";
    // }
    // cout << endl;
  }
  return !(in[k - 2] || in[k - 1]);
}

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  while (n--) {
    int k;
    cin >> k;
    int item;
    vector<int> in(k + 1);
    for (int i = 0; i < k; i++) {
      cin >> item;
      in[i] = item;
    }
    string ans = solution(in, k) ? "YES" : "NO";
    cout << ans << endl;
  }

  return 0;
}
