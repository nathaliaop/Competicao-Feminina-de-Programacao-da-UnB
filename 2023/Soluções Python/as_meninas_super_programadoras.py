t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    if abs(a - b) % 2 == 1:
        print(-1)
    elif a == 0 and b == 0:
        print(0)
    elif a == b:
        print(1)
    else:
        print(2)