t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())
    
    if abs(b - c) + c - 1 > a - 1:
        print(1)
    elif abs(b - c) + c - 1 < a - 1:
        print(2)
    else:
        print(3)