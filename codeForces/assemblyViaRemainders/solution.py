n = int(input())

for _ in range(n):
    k = int(input())
    array = list(map(int, input().split()))

    def sol(array):
        n = len(array)
        i = 0
        fNumber = array[i] + 1

        while i < n:
            secondNumber = array[i]
            while i != n - 1 and secondNumber <= array[i + 1]:
                secondNumber += fNumber

            print(fNumber, end=" ")
            fNumber = secondNumber
            i += 1
        print(fNumber)

    sol(array)
