t = int(input())

for _ in range(t):
    a, b = map(int, input().split())
    b %= 2

    def sol(a, b):
        a -= (b * 2)
        if a < 0 or a % 2:
            print("NO")
        else:
            print("YES")
    sol(a, b)
