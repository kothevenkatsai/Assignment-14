//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
void main()
{
    int a[10],min;
    for(int i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(int i=1;i<10;++i)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("min=%d",min);

}
