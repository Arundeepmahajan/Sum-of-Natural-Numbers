#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number till which you want the sum to be added ";
    int number;
    cin>>number;
    int sum=0;
    for(int i=0;i<=number;i++)
    {
        sum=sum+number;
        i++;

    }
    cout<<"The sum of the numbers till "<<number<<" is "<<sum;
    return 0;
}