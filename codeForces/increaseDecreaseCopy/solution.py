t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    s = list(map(int, input().split()))

    def sol(n, a, s):
        mvCount = 0
        lastS = s[n]
        fl = False
        clLastS = 0
        for i in range(n):
            mini = min(a[i], s[i])
            maxi = max(a[i], s[i])
            mvCount += maxi-mini
            if not fl:
                if mini <= lastS and maxi >= lastS:
                    mvCount += 1
                    fl = True
                if clLastS == 0 or clLastS > abs(maxi - lastS):
                    clLastS = abs(maxi - lastS)
                if clLastS > abs(mini - lastS):
                    clLastS = abs(mini - lastS)
        if not fl:
            mvCount += clLastS + 1
        return mvCount
    print(sol(n, a, s))
