t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    dp = [False for _ in range(n+1)]

    def sol():

        dp[0] = True
        for i in range(0, n+1):
            if i - a[i-1]-1 >= 0:
                dp[i] = dp[i] or dp[i - a[i-1] - 1]
            if dp[i] and i != n and i+a[i] + 1 <= n:
                dp[i+a[i] + 1] = True

                # def recur(i, prev):
                #     if dp[i] == True:
                #         return dp[i]
                #     if i == n:
                #         dp[n] = prev == 0
                #         return prev == 0
                #     if i > n:
                #         return False
                #
                #     if prev:
                #         dp[i] = recur(i+1, prev + 1)
                #         if prev == a[i]:
                #             dp[i] = dp[i] or recur(i+1, 0)
                #
                #     else:
                #         dp[i] = recur(i+1, 1)
                #         if i + a[i]+1 <= n:
                #             dp[i] = dp[i] or recur(i+1+a[i], 0)
                #
                #     return dp[i]

    sol()
    if dp[n] == True:
        print("YES")
    else:
        print("NO")
