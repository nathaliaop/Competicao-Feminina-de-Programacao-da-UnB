import sys

# ler a altura do armário
h = int(input());

# pedir para Mochi testar a altura 1
print(1)
sys.stdout.flush();

# ler a resposta de Mochi
ans = input();

# responder qual é a altura máxima da qual o copo pode ser jogado sem quebrar
if ans == "Quebrou":
    print("! 0");
else:
    print("! 1");
