s = input()
prev = ''
k = 0
i = 0
while i < len(s):
    c = s[i]
    if prev == c:
        i += 1
        if i == len(s):
            break
        c += s[i]
    prev = c
    k += 1  
    i += 1
print(k)