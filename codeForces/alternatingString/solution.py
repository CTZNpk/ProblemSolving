t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    def sol(s, n):
        res = n
        if n % 2 == 0:
            v = [[0] * 26 for x in range(2)]
            for i in range(n):
                v[i % 2][ord(s[i]) - ord('a')] += 1

            for i in range(2):
                mx = max(v[i % 2])
                res -= mx
        else:
            pre = [[0] * 26 for x in range(2)]
            suff = [[0] * 26 for x in range(2)]

            for i in range(n-1, -1, -1):
                suff[i % 2][ord(s[i]) - ord('a')] += 1
            for i in range(n):
                suff[i % 2][ord(s[i]) - ord('a')] -= 1
                ans = n
                for k in range(2):
                    mx = 0
                    for j in range(26):
                        mx = max(mx, pre[k][j] + suff[1-k][j])
                    ans -= mx
                res = min(res, ans)
                pre[i % 2][ord(s[i]) - ord('a')] += 1
        print(res)
    sol(s, n)
