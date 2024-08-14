n, t, a = map(int, input().split())

half = n//2

if t > half or a > half:
    print("Yes")
else:
    print("No")
