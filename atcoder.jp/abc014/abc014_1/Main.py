a,b = [int(input()) for _ in range(2)]
if a%b==0:
  print(0)
else:
  print(b-a%b)