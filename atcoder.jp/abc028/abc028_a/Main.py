W = int(input())
ans = ''
if W == 100:
  ans = 'Perfect'
elif 90 <= W <= 99:
  ans = 'Great'
elif 60 <= W <= 89:
  ans = 'Good'
else:
  ans = 'Bad'
print(ans)