/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>

void main()
{
    int a[10],esum=0,osum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            esum=esum+a[i];
        else
            osum=osum+a[i];;
    }
    printf("%d %d",esum,osum);
}
