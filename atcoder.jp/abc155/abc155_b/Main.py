N = input()
A = list(map(int, input().split()))

ans = True
for num in A:
  if num%2==0:
    if not(num%3==0 or num%5==0):
      ans = False
      break
      
if ans:
  print('APPROVED')
else:
  print('DENIED')
  