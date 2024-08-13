from bisect import *

for i in range(int(input())):
    n, k, q = map(int, input().split())
    a = [0]+list(map(int, input().split()))
    b = [0]+list(map(int, input().split()))
    for j in range(q):
        q = int(input())
        i = bisect_left(a, q)-1
        print(b[i]+((q-a[i])*((b[i+1]-b[i]))//(a[i+1]-a[i])))
