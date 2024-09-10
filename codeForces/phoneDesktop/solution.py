t = int(input())

for _ in range(t):
    x, y = map(int, input().split())

    def sol(x, y):
        pages = 0

        pages = (y+1) // 2
        remainingTiles = pages * 7
        if y % 2:
            remainingTiles += 4
        xRem = x - remainingTiles
        if xRem <= 0:
            return pages
        else:
            return pages + ((xRem + 14) // 15)
    print(sol(x, y))
