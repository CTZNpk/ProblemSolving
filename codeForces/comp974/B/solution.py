t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    totalLeaves = n * (n+1)//2
    leavesexp = (n-k)*(n-k+1)//2

    print("NO" if (totalLeaves - leavesexp) % 2 else "YES")
