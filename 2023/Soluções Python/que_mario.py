n = int(input())
 
conj = set()
 
for idx,x in enumerate(input().split()):
    if idx > 0:
        conj.add(x)
        
for idx,x in enumerate(input().split()):
    if idx > 0:
        conj.add(x)
        
if len(conj) == n:
    print('Sou eu, Mario!')
else:
    print('Que Mario?')