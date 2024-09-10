t = int(input())

for _ in range(t):
    n = int(input())

    a = list(map(int, input().split()))

    a.sort()
    maxi = max(a)

    count = 1
    for i in a:
        if i == count:
            count += 1

    if count > maxi:
        print("Alice" if maxi % 2 == 1 else "Bob")
    else:
        print("Alice" if count % 2 == 1 else "Bob")
