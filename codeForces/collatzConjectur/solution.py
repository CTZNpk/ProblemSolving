t = int(input())

for _ in range(t):
    x, y, k = map(int, input().split())

    def sol(x, y, k):
        while k > 0 and x > 1:
            rem = y - x % y

            if rem >= k:
                x += k
                k = 0
            else:
                x += rem
                k -= rem
            while x % y == 0:
                x = x / y
        if k > 0:
            k %= y-1
            x += k
            while (x % y == 0):
                x / y
        return int(x)
    print(sol(x, y, k))
