S = input()
for i in range(2,len(S),2):
    if S[:(len(S)-i)//2] == S[(len(S)-i)//2:len(S)-i]:
        ans = len(S)-i
        break
print(ans)