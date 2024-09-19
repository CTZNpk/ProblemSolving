t = int(input())
s = "narek"

for _ in range(t):
    n, m = map(int, input().split())
    inp = []
    for _ in range(n):
        k = input()
        inp.append(k)

    dp = [[-1 for i in range(5)] for j in range(n)]

    def sol(i, j):
        if i >= n:
            return -2 * j
        if dp[i][j] != -1:
            return dp[i][j]
        notTake = sol(i+1, j)
        origJ = j
        take = 0

        for k in range(m):
            if inp[i][k] == s[j]:
                j = (j+1) % 5
                take += 1
            elif inp[i][k] == 'n' or inp[i][k] == 'a' or inp[i][k] == 'r' or inp[i][k] == 'e' or inp[i][k] == 'k':
                take -= 1
        take += sol(i+1, j)
        dp[i][origJ] = max(take, notTake)
        return dp[i][origJ]
    print(sol(0, 0))
