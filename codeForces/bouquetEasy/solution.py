t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))

    def sol(n, m, a):
        sum = 0
        a.sort()


        curSum = 0
        i = 0
        j = 0
        while i < n:
            if curSum > m or j >= n:
                curSum -= a[i]
                i += 1
            elif a[i] < a[j]-1:
                curSum -= a[i]
                i += 1
            else:
                curSum += a[j]
                j += 1
            if curSum <= m:
                sum = max(sum, curSum)
        print(sum)

    sol(n, m, a)
