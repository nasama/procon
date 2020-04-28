S = input()
K = input() 
ans = 1
if not all([i == '1' for i in S[:int(K)]]):
    for i in range(len(S)):
        if S[i] != '1':
            ans = int(S[i])
            break
print(ans)