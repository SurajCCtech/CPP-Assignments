n=50
fact=1
num=[]
sum=0
#finding the factorial of a number
for i in range(1,n+1):
    fact=fact*i
#converting factorial number into digits in form of list
    num=map(int, str(fact))
#addition of digits of factorial of given number
for i in num:
    sum=sum+i
print("Sum of digits of ",n," factorial is:",sum)