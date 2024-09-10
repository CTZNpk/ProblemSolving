import math
t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    def sol(s, n):
        k = math.sqrt(n)
        cr = 0
        r = k - 1
        if k != int(k):
            return False
        i = 0

        while i < k:
            if s[i] != '1':
                return False
            i += 1
        cr += 1

        while cr < r:
            k += r+1
            ele = 0
            while i < k:
                if ele == 0:
                    if s[i] != '1':
                        return False
                elif ele == r:
                    if s[i] != '1':
                        return False
                else:
                    if s[i] != '0':
                        return False
                ele += 1
                i += 1
            cr += 1

        k += r+1
        while i < k:
            if s[i] != '1':
                return False
            i += 1
        return True
    if sol(s, n):
        print("Yes")
    else:
        print("No")
