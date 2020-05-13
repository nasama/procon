S = input()[::-1]
a = ['maerd', 'remaerd', 'esare', 'resare']
i = 0
ans = 'YES'
while True:
    if i == len(S):
        break 
    if S[i:i+5] == 'maerd':
        i+=5
    elif S[i:i+5] == 'esare':
        i+=5
    elif S[i:i+6] == 'resare':
        i+=6
    elif S[i:i+7] == 'remaerd':
        i+=7   
    else:
        ans = 'NO'
        break
print(ans) 





