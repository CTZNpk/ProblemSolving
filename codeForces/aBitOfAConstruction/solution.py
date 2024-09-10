t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    def sol(n, k):
        if n == 1:
            print(k)
            return
        ans = [0 for x in range(n)]
        origK = k
        f = False
        cur = 0
        highBit = 0
        while k:
            if not k & 1:
                f = True
            k >>= 1
            highBit += 1
        if f:
            cur = (1 << highBit-1) - 1
        else:
            cur = origK
        ans[0] = cur
        if n > 1:
            ans[1] = origK - cur
        for i in ans:
            print(i, end=" ")
        print("")
    sol(n, k)
