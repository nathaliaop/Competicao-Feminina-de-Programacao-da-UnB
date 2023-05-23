n = int(input())
acusacoes = [0] * (n + 1)
for _ in range(n):
    q, x = input().split()
    if q == '2':
        i = int(x)
        acusacoes[i] += 1
        if acusacoes[i] > 1:
            print(i)
            break
else: 
    print(-1)