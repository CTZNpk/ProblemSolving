t = int(input())

for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    s = input()

    def sol(n, p, s):
        dp = [-1] * n
        for i in range(n):
            # if dp[i] == -1:
            #     continue
            if p[i] == i+1:
                dp[i] = int(s[i] == '0')
            else:
                tabu = []
                tabu.append(i)
                k = p[i]-1
                count = int(s[i] == '0')
                while True:
                    if k not in tabu:
                        if dp[k] != -1:
                            count += dp[k]
                            break
                        else:
                            count += int(s[k] == '0')
                        tabu.append(k)
                    else:
                        break
                    k = p[k] - 1
                kc = count
                for x in range(len(tabu)-1, -1, -1):
                    kc -= int(s[x] == '0')
                    dp[x] = kc

                dp[i] = count
            print(dp)
        for x in dp:
            print(x, end=" ")
        print("")
    sol(n, p, s)
