N = int(input())
S = input()
x = 0
maxnum = 0
for i in S:
  if i == 'I':
    x += 1
  else:
    x -= 1
  maxnum = max(maxnum, x)
print(maxnum)