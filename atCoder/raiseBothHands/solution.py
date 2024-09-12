l, r = map(int, input().split())

if (l and r) or (not l and not r):
    print("Invalid")
elif l:
    print("Yes")
else:
    print("No")
