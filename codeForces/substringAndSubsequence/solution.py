# def lcs(i, j, s, t, dp):
#     if i < 0 or j < 0:
#         return 0
#     if dp[i][j] != -1:
#         return dp[i][j]
#
#     if s[i] == t[j]:
#         dp[i][j] = lcs(i-1, j - 1, s, t, dp) + 1
#     else:
#         dp[i][j] = lcs(i-1, j, s, t, dp)
#     return dp[i][j]
#
#
# def driver(lenS, lenT, s, t):
#     dp = [[-1 for j in range(lenT + 1)] for i in range(lenS + 1)]
#     maxi = 0
#     for j in range(lenT - 1, -1, -1):
#         maxi = max(lcs(lenS-1, j, s, t, dp), maxi)
#     return maxi

def sol(lenS, lenT, s, t):
    maxi = 0
    for j in range(lenT-1, -1, -1):
        curmaxi = 0
        k = j
        for i in range(lenS-1, -1, -1):
            if s[i] == t[k]:
                k -= 1
                curmaxi += 1
                if k < 0:
                    break
        maxi = max(maxi, curmaxi)
    return maxi


n = int(input())

for _ in range(n):
    s = input()
    t = input()
    lenS = len(s)
    lenT = len(t)
    k = sol(lenS, lenT, s, t)
    print(lenS + lenT - k)
