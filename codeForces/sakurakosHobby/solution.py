t = int(input())

for _ in range(t):
    n = int(input())
    p = [k-1 for k in map(int, input().split())]
    s = input()

    b = [0] * (n)
    us = [0] * (n)

    for i in range(n):
        if us[i]:
            continue

        count = 0
        while not us[i]:
            us[i] = 1
            count += s[i] == '0'
            i = p[i]
        while us[i] != 2:
            us[i] += 1
            b[i] = count
            i = p[i]
    print(" ".join(map(str, b)))
