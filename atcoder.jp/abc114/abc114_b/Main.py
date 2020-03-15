S = input()
minnum = 800
for i in range(len(S)-2):
   minnum = min(abs(int(S[i])*100+int(S[i+1])*10+int(S[i+2]) - 753), minnum)
print(minnum)