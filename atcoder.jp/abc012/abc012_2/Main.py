N = int(input())
h = N//3600
m = (N-h*3600)//60
s = N%60

if len(str(h)) == 1:
    a = '0'+str(h)
else:
    a = str(h)
if len(str(m)) == 1:
    b = '0'+str(m)
else:
    b = str(m)
if len(str(s)) == 1:
    c = '0'+str(s)
else:
    c = str(s)
print(':'.join([a,b,c]))