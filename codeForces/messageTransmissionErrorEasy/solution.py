t = input()


def sol(t):
    n = len(t)

    i = 0
    j = 1

    while j < (n+1) // 2:
        i = 0
        origJ = j
        s = ""
        while j < n:
            if t[i] == t[j]:
                s += t[i]
                i += 1
                j += 1
            else:
                break
        if j == n:
            print("YES")
            print(s)
            return
        j = origJ + 1
    print("NO")


sol(t)
