t = int(input())


def sol(a, s, n):
    sumArray = []
    sumArray.append(a[0])
    for i in range(1, n):
        sumArray.append(a[i] + sumArray[i-1])

    left = 0
    r = n-1

    sum = 0
    while left < r:
        if s[left] != 'L':
            left += 1
        if s[r] != 'R':
            r -= 1
        if s[left] == 'L' and s[r] == 'R':
            if left == 0:
                sum += sumArray[r]
            else:
                sum += sumArray[r] - sumArray[left-1]
            left += 1
            r -= 1
    return sum


for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    s = input()
    print(sol(a, s, n))
