def sol(s: str):
    k = len(s) - 1
    i = 0
    shifts = 0
    while k > 0 and s[k] == "1":
        k -= 1

    while i <= k and s[i] == "0":
        i += 1

    count_1 = 0
    while i <= k:
        if s[i] == "1":
            count_1 += 1
        else:
            shifts += count_1 + 1
        i += 1
    print(shifts)


n = int(input())

for _ in range(n):
    s = str(input())
    sol(s)
