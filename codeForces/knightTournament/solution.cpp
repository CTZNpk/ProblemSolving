#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void updateSegTree(vector<pair<int, int>> &segTree, int v, int tl, int tr,
                   int l, int r, int new_val) {
  if (l > r)
    return;

  if (tl == tr) {
    segTree[v].first = new_val;
  } else {
    if (tl == l && tr == r) {
      if (segTree[v].first == 0) {
        segTree[v].first = new_val;
      } else if (segTree[v].second == 0) {
        segTree[v].second = new_val;
      }
      return;
    }
    int tm = (tl + tr) / 2;
    updateSegTree(segTree, v * 2 + 1, tl, tm, l, min(r, tm), new_val);
    updateSegTree(segTree, v * 2 + 2, tm + 1, tr, max(l, tm + 1), r, new_val);
  }
}

void getResults(vector<pair<int, int>> segTree, vector<int> &ans, int v, int tl,
                int tr, int curw, int w) {
  int cur = segTree[v].first;
  int curW = segTree[v].second;

  if (cur == 0) {
    cur = curw;
    curW = w;
  } else {
    if (curW == 0 && curw != cur) {
      curW = curw;
    }
  }
  if (tl == tr) {
    if (tl == cur - 1) {
      ans[tl] = curW;
    } else {
      ans[tl] = cur;
    }
    return;
  }
  int tm = (tl + tr) / 2;
  getResults(segTree, ans, v * 2 + 1, tl, tm, cur, curW);
  getResults(segTree, ans, v * 2 + 2, tm + 1, tr, cur, curW);
}

int main(int argc, char *argv[]) {

  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> segTree(4 * n, pair<int, int>(0, 0));

  vector<int> ans(n, 0);

  while (m--) {
    int l, r, x;
    cin >> l >> r >> x;
    updateSegTree(segTree, 0, 0, n - 1, l - 1, r - 1, x);
  }
  getResults(segTree, ans, 0, 0, n - 1, 0, 0);

  for (int i : ans) {
    cout << i << " ";
  }

  return 0;
}
