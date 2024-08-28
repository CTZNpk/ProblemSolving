t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    def sol(n, k, a):
        maxi = max(a)
        count = 0
        flagger = False
        for i in a:
            if i != maxi or flagger:
                count += i-1
                count += i
            if i == maxi:
                flagger = True

        print(count)
    sol(n, k, a)
