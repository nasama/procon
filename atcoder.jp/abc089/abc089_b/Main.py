N = int(input())
S = input().split()
a = set()
for i in S:
    a.add(i)
if len(a)==3:
    print('Three')
else:
    print('Four')