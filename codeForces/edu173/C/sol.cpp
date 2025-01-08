
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vll sum;
  ll l = 0;
  ll currP = 0;
  ll currN = 0;
  int loc = 0;
  int unknownLoc = -1;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    if (l == 0) {
      if (k == 1) {
        currP = 1;
      } else if (k == -1) {
        currN = -1;
      } else {
        sum.push_back(k);
        unknownLoc = loc;
        loc++;
        l--;
      }
    } else {
      if (k == 1) {
        if (currN != 0) {
          sum.push_back(currN);
          loc++;
          currN = 0;
        }
        currP++;
      } else if (k == -1) {

        if (currP != 0) {
          sum.push_back(currP);
          loc++;
          currP = 0;
        }
        currN--;
      } else {
        if (currN != 0) {
          sum.push_back(currN);
          loc++;
          currN = 0;
        } else if (currP != 0) {
          sum.push_back(currP);
          loc++;
          currP = 0;
        }
        unknownLoc = loc;
        sum.push_back(k);
        loc++;
      }
    }
    l++;
  }
  if (currP != 0) {
    sum.push_back(currP);
  } else if (currN != 0) {
    sum.push_back(currN);
  }

  ll minReachL = 0;
  ll maxReachL = 0;
  ll minReachR = 0;
  ll maxReachR = 0;
  ll commP = 0;
  ll commN = 0;

  bool found = true;
  for (int i = 0; i < sum.size(); i++) {
    if (i != unknownLoc) {
      commP += sum[i];
      commN += sum[i];
      if (commP < 0) {
        commP = 0;
      }
      if (commN > 0) {
        commN = 0;
      }
      if (found) {
        minReachL = min(minReachL, commN);
        maxReachL = max(maxReachL, commP);
      } else {
        minReachR = min(minReachR, commN);
        maxReachR = max(maxReachR, commP);
      }
    } else {
      commN = 0;
      commP = 0;
      found = false;
    }
  }

  vll ans;
  ll absMax = max(maxReachL, maxReachR);
  ll absMin = min(minReachL, minReachR);
  if (unknownLoc != -1) {
    bool zeroFound = false;

    maxReachL = 0;
    maxReachR = 0;
    minReachL = 0;
    minReachR = 0;

    int i = unknownLoc - 1;
    ll currReach = 0;
    while (i >= 0) {
      currReach += sum[i];
      maxReachL = max(maxReachL, currReach);
      minReachL = min(minReachL, currReach);
      i--;
    }
    currReach = 0;
    i = unknownLoc + 1;
    while (i < sum.size()) {
      currReach += sum[i];
      maxReachR = max(maxReachR, currReach);
      minReachR = min(minReachR, currReach);
      i++;
    }

    ll absMidMin = 0;
    ll absMidMax = 0;
    absMidMin = minReachL + minReachR + sum[unknownLoc];
    absMidMax = maxReachR + maxReachL + sum[unknownLoc];
    if (absMin < absMidMin) {
      while (absMin <= absMax) {
        ans.push_back(absMin);
        absMin++;
      }
      absMin = max(absMin, absMidMin);
      while (absMin <= absMidMax) {
        ans.push_back(absMin);
        absMin++;
      }
    } else {
      while (absMidMin <= absMidMax) {
        ans.push_back(absMidMin);
        absMidMin++;
      }
      absMin = max(absMin, absMidMin);
      while (absMin <= absMax) {
        ans.push_back(absMin);
        absMin++;
      }
    }
  } else {
    while (absMin <= absMax) {
      ans.push_back(absMin);
      absMin++;
    }
  }

  cout << ans.size() << "\n";
  for (auto &i : ans) {
    cout << i << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
