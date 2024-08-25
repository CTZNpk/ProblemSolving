import math
n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

diff = {}
keys = []
lenKeys = 0

maxi = 0
for i in range(n):
    d = a[i] - b[i]
    if d in diff:
        if a[i] < diff[d][0]:
            diff[d] = [a[i], b[i]]
    else:
        keys.append(d)
        lenKeys += 1
        diff[d] = [a[i], b[i]]
    maxi = max(maxi, d)


exp = 0
j = 0
keys.sort()

c.sort(reverse=True)
while (j < lenKeys):
    i = keys[j]
    if c[0] >= diff[i][0]:
        d = c[0] - diff[i][0]+1
        times = math.ceil(d/i)
        c[0] -= times * i
        exp += 2 * times
        for k in range(m-1):
            if c[k] < c[k+1]:
                c[k], c[k+1] = c[k+1], c[k]
            else:
                break
        j -= 1
    j += 1

print(exp)
