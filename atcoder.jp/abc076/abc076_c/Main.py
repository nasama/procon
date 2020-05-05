import heapq
s = input()
t = input()

b = []

for i in range(len(s)-len(t)+1):
    flag = True
    for j, st in enumerate(s[i:i+len(t)]):
        if not st == t[j] and not st == '?':
            flag = False
            break
    if flag:
        heapq.heappush(b,(s[:i]+t+s[i+len(t):]).replace('?','a'))

if not b:
    print('UNRESTORABLE')
else:
    print(heapq.heappop(b))