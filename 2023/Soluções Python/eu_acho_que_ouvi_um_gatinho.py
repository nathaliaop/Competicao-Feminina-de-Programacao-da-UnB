t = int(input())
for _ in range(t):
    n = int(input())
    s = input().lower()
    
    nova = s[0]
    
    for i in range(len(s)):
        if i != 0 and s[i] != s[i - 1]:
            nova += s[i]
    
    if nova == "meow":
        print("YES")
    else:
        print("NO")