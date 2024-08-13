t = int(input())


def sol(x, y, k):
    targetX = x * k
    targetY = y * k

    for i in range(k-1):
        if targetY > 0:
            print(0, " ", y - i)
            targetY -= y - i
        else:
            print(0, " ", y + i)
            targetY -= y + i

    print(targetX, " ", targetY)


for _ in range(t):
    x, y, k = map(int, input().split())
    sol(x, y, k)
