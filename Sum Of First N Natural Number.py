n=input("Enter Number to calculate the sum till ")
n=int(n)
sum=0
for num in range(0,n+1,1):
    sum=sum+num
print("Sun of First ",n," numbers is: ",sum)