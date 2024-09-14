#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<ll> in;

  for (int i = 0; i < n; i++) {
    ll k;
    cin >> k;
    in.push_back(k);
  }

  ll curSCount = 1;
  ll curDiff = 0;
  ll seqCount = n + n - 1;

  for (int i = 1; i < n; i++) {
    if (curSCount == 1) {
      curDiff = in[i] - in[i - 1];
      curSCount++;
    } else if (curSCount >= 2) {
      if (in[i] - in[i - 1] == curDiff) {
        curSCount++;
      } else {
        curSCount -= 2;
        seqCount += (curSCount) * (curSCount + 1) / 2;
        curSCount = 2;
        curDiff = in[i] - in[i - 1];
      }
    }
  }
  if (curSCount > 2) {
    curSCount -= 2;
    seqCount += (curSCount) * (curSCount + 1) / 2;
  }
  cout << seqCount << "\n";

  return 0;
}
