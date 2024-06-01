def sol(s):
    count_c = 0
    for c in s:
        if c == "U":
            count_c += 1
    if count_c % 2:
        print("YES")
    else:
        print("NO")


n = int(input())
for _ in range(n):
    k = int(input())
    s = str(input())
    sol(s)
