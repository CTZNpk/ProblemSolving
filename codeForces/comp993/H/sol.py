
n = int(input())

aList = []

for p in range(n):
    anotherList = []
    for k in range(n):
        a = list(map(int, input().split()))
        for i in range(1, len(a)):
            a[i] += a[i-1]

        anotherList.append(a)
    aList.append(anotherList)

q = int(input())


for _ in range(q):
    lx, rx, ly, ry, lz, rz = map(int, input().split())

    sum = 0
    for i in range(lx-1, rx):
        for j in range(ly-1, ry):
            if (lz == 1):
                sum += aList[i][j][rz-1]
            else:
                sum += aList[i][j][rz-1] - aList[i][j][lz-2]

    print(sum)
