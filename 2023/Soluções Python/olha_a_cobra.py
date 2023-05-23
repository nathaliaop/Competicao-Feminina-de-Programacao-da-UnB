n, m = map(int, input().split())

for i in range(n):
    for j in range(m):
        if (i % 2 == 0):
            print("#", end="")
        elif (i % 4 == 1):
            if j == m - 1:
                print("#", end="")
            else:
                print(".", end="")
        elif (i % 4 == 3):
            if j == 0:
                print("#", end="")
            else:
                print(".", end="")
    print(end="\n")