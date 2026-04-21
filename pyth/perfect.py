#Sum of proper divisors = number   6 → 1+2+3 = 6
n = int(input())
s = 0

for i in range(1, n):
    print(i,n)
    if n % i == 0:
        print("yoo")
        s += i

if s == n:
    print("Perfect")
else:
    print("Not Perfect")