A, B = map(int, input().split())
S = input()

ans = "Yes"
if len(S) != A+B+1:
  ans = "No"
for i, s in enumerate(S):
  if i == A:
    if s != '-':
      ans = "No"
  else:
    if not '0' <= s <= '9':
      ans = "No"
print(ans)
