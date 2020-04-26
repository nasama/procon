S = input()
n, s, w, e = 0, 0, 0, 0
if 'N' in S:
    n = 1
if 'S' in S:
    s = 1
if 'W' in S:
    w = 1
if 'E' in S:
    e = 1
if n == s and w == e:
    print('Yes')
else:
    print('No')