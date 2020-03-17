S = input()
T = int(input())

count = 0
x = y = 0
for i in range(len(S)):
  if S[i] == 'L':
    x-=1
  if S[i] == 'R':
    x+=1
  if S[i] == 'U':
    y+=1
  if S[i] == 'D':
    y-=1
  if S[i] == '?':
    count += 1

if T == 1:
  print(abs(x)+abs(y)+count)
else:
  print(max(len(S)%2, abs(x)+abs(y)-count))