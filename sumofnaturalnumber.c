#include <stdio.h>
int main()
{
    printf("Enter the number till which you want to add the sum of natural numbers: ");
    int number;
    scanf("%d",&number);
    int sum=0;
    for(int i=1;i<=number;i++)
    {
        sum=sum+number;
        i++;
    }
    printf("The sum of the number till the natural number %d is %d",number,sum);
    return 0;
}