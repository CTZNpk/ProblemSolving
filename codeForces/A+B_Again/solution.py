n = int(input())

for _ in range(n):
    k = int(input())
    sum = k // 10
    sum += k % 10
    print(sum)
