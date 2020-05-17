N = int(input())
a = [2,4,5,7,9]
b = [0,1,6,8]
if N%10 in a:
    print("hon") 
elif N%10 in b:
    print("pon")
else:
    print("bon")