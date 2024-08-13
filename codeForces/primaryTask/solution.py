t = int(input())


def sol(n):
    dumNum = n
    numDig = 1
    while True:
        dumNum /= 10
        if dumNum <= 1:
            break
        numDig += 1

    if numDig == 2:
        print("NO")
        return

    left2 = n // (10 ** (numDig - 2))
    if left2 != 10:
        print("NO")
        return
    rightNum = n % (10 ** (numDig - 1))

    if rightNum < 2:
        print("NO")
        return
    middleDigit = rightNum // (10 ** (numDig - 3))
    if middleDigit == 0:
        print("NO")
        return
    print("YES")


for _ in range(t):
    n = int(input())

    sol(n)
