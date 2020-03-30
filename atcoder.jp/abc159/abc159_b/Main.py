S = input()
a = S[:len(S)//2]
b = S[len(S)//2+1:]
ans = 'Yes'
for i in range(len(a)//2):
    if a[i] != a[len(a)-i-1]:
        ans = 'No'
        break
for i in range(len(b)//2):
    if b[i] != b[len(b)-i-1]:
        ans = 'No'
        break
for i in range(len(S)):
    if S[i] != S[len(S)-i-1]:
        ans = 'No'
        break
print(ans)