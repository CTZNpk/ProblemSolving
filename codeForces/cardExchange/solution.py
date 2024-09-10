t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    a = list(map(int, input().split()))

    a.sort()

    def sol(a, n, k):
        maxCount = 1
        count = 1
        for i in range(1, n):
            if a[i] == a[i-1]:
                count += 1
                if count > maxCount:
                    maxCount = count
            else:
                count = 1
        if maxCount >= k:
            return k-1
        return n
    print(sol(a, n, k))
