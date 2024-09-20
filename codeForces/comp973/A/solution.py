t = int(input())

for _ in range(t):
    n = int(input())
    x, y = map(int, input().split())

    c = min(x, y)
    print((n+(c-1))//c)
