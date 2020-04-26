s = input()
mina = float('inf')
maxz = 0
for i in range(len(s)):
    if s[i] == 'A':
        mina = min(mina, i)
    elif s[i] == 'Z':
        maxz = max(maxz, i)
print(maxz-mina+1)