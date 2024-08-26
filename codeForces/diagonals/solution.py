t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    def sol(n, k):
        diags = 0
        count = 1
        while k > 0 and n > 0:
            k -= n
            if count % 2:
                n -= 1
            count += 1
            diags += 1
        print(diags)
    sol(n, k)
