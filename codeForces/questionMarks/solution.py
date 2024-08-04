n = int(input())

for _ in range(n):
    k = int(input())
    s = input()

    def sol(k, s):
        A = 0
        B = 0
        C = 0
        D = 0

        for i in s:
            if i == 'A' and A < k:
                A += 1
            elif i == 'B' and B < k:
                B += 1
            elif i == 'C' and C < k:
                C += 1
            elif i == 'D' and D < k:
                D += 1
        return A+B+C+D
    print(sol(k, s))
