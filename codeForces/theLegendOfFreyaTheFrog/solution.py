t = int(input())

for _ in range(t):
    x, y, k = map(int, input().split())

    def sol(x, y, k):
        xMoves = (x + k-1) // k
        yMoves = (y + k-1) // k
        if yMoves > xMoves:
            return yMoves * 2
        elif xMoves == yMoves:
            return 2 * xMoves
        else:
            return xMoves + (xMoves - 1)
    print(sol(x, y, k))
