n = int(input())
#armstrong no. oo hota h jo Concept:
#Number = sum of digits^digits 

temp = n
digit = len(str(n))
s =0
while n >0:
    d = n %10 
    s +=d ** digit
    n//=10
if s == temp :
    print("Armstrong")
else:
    print("not Armstrong")