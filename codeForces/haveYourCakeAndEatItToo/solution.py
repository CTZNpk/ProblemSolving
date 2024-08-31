# import math
# t = int(input())
#
# for _ in range(t):
#     n = int(input())
#     a = list(map(int, input().split()))
#     b = list(map(int, input().split()))
#     c = list(map(int, input().split()))
#
#     def recur(a, b, c, n, sL, ind, totti, curSt):
#         for i in range(curSt, n):
#             sL[0] += a[i]
#             sL[1] += b[i]
#             sL[2] += c[i]
#             maxi = max(sL)
#             if maxi >= totti:
#                 if sL[0] >= totti:
#                     indi = ind.copy()
#                     indi[0] = curSt+1
#                     indi[1] = i+1
#                     indi = recur(
#                         a, b, c, n, [-1e9, min(sL[1], 0), min(sL[2], 0)], indi, totti, i+1)
#                     if None not in indi:
#                         return indi
#                 if sL[1] >= totti:
#                     indi = ind.copy()
#                     indi[2] = curSt+1
#                     indi[3] = i+1
#                     indi = recur(
#                         a, b, c, n, [min(sL[0], 0), -1e9, min(sL[2], 0)], indi, totti, i+1)
#                     if None not in indi:
#                         return indi
#                 if sL[2] >= totti:
#                     indi = ind.copy()
#                     indi[4] = curSt+1
#                     indi[5] = i+1
#                     indi = recur(
#                         a, b, c, n, [min(sL[0], 0), min(sL[1], 0), -1e9], indi, totti, i+1)
#                     if None not in indi:
#                         return indi
#         return ind
#
#     def sol(a, b, c, n):
#         tot = 0
#         for i in a:
#             tot += i
#         totti = math.ceil(tot/3)
#         sL = [0, 0, 0]
#         ind = [None] * 6
#         curSt = 0
#         ind = recur(a, b, c, n, sL, ind, totti, curSt)
#         if None in ind:
#             print(-1)
#         else:
#             for x in ind:
#                 print(x, end=" ")
#             print("")
#     sol(a, b, c, n)
from itertools import permutations

t = int(input())

while (t):
    t -= 1
    n = int(input())
    val = [[0], [0], [0]]
    pf = [[0], [0], [0]]
    for i in range(3):
        val[i] += list(map(int, input().split(' ')))
    for i in range(3):
        for j in range(1, n+1):
            pf[i].append(pf[i][j-1] + val[i][j])

    ok = False
    perms = list(permutations([0, 1, 2]))
    comp = (pf[0][n]+2)//3

    for i in range(6):
        cur = 1
        perm = perms[i]
        while (cur <= n and pf[perm[0]][cur] < comp):
            cur += 1
        for j in range(cur+1, n):
            if (pf[perm[1]][j] - pf[perm[1]][cur] >= comp and pf[perm[2]][n] - pf[perm[2]][j] >= comp):
                ans = [[], [], []]
                ans[perm[0]] = [1, cur]
                ans[perm[1]] = [cur+1, j]
                ans[perm[2]] = [j+1, n]

                for x in ans:
                    print(x[0], x[1])
                print()
                ok = True
                break

        if (ok):
            break

    if (not ok):
        print(-1)
        print()
