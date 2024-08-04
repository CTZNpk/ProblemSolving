t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    chips = list(map(int, input().split()))

    def sol(n, k, chips):
        chips.sort()
        largestChip = chips[n - 1]
        largestChipAfter = 0
        for i in range(len(chips) - 1):
            diff = largestChip - chips[i]
            mult = diff // k

            if mult % 2:

                chips[i] = chips[i] + k * (mult+1)
            else:
                chips[i] = chips[i] + k * mult
            if chips[i] > largestChipAfter:
                largestChipAfter = chips[i]
        if largestChipAfter < largestChip:
            largestChipAfter = largestChip
        for i in chips:
            if i != largestChipAfter:
                if i + k <= largestChipAfter:
                    return -1
        return largestChipAfter

    print(sol(n, k, chips))
