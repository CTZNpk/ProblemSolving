n = int(input())

for _ in range(n):
    n, x, y = map(int, input().split())

    def sol(n, x, y):
        array = []
        altVal = -1
        preAlt = -1
        if y % 2:
            preAlt = 1

        for k in range(n):
            if k >= x:
                array.append(altVal)
                if altVal == -1:
                    altVal = 1
                else:
                    altVal = -1
            elif k < y - 1:
                array.append(preAlt)
                if preAlt == -1:
                    preAlt = 1
                else:
                    preAlt = -1
            else:
                array.append(1)
        return array

    ans = sol(n, x, y)
    for i in ans:
        print(i, end=" ")
    print("")
