//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
void main()
{
    int a[10],sum=0;
    for(int i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);

}
