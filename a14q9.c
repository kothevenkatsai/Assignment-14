//9. Write a program in C to read n number of values in an array and display it in reverse \
order. Take array values from the user.
#include<stdio.h>
void main()
{
    int a[10];
    for(int i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
    }
    for(int i=9;i>=0;i--)
        printf("%3d ",a[i]);
}
