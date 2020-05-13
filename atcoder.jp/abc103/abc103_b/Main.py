S = input()
T = input()
ans = 'No'
for i in range(len(S)):
    if T == S[i:] + S[0:i]:
        ans = 'Yes'
        break
print(ans)
