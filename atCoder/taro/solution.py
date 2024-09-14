n, m = map(int, input().split())

hashMap = {}

for _ in range(m):
    a, b = input().split()
    if b == 'M' and a not in hashMap:
        print('Yes')
        hashMap[a] = True
    else:
        print('No')
