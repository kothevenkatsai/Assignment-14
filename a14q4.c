/*
4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
void main()
{
    int a[10],max;
    for(int i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=1;i<10;++i)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("max=%d",max);

}
