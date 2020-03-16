a, b = input().split()
ans = 'No'
for i in range(1000):
  if i*i == int(a+b):
    ans = 'Yes'
print(ans)