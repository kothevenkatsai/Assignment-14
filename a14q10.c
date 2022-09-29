//10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
void main()
{
    int a[10],c[10];
    for(int i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;++i)
    {
        c[i]=a[i];
    }

    for(int i=0;i<10;++i)
    {
    printf("%3d ",c[i]);
    }

}
