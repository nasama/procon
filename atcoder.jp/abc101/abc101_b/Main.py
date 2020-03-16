N = input()
a = 0
for i in N:
  a += int(i)
if int(N)%a==0:
  print('Yes')
else:
  print('No')