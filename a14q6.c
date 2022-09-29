//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
void main()
{
    int a[10],temp;
    for(int i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(a[i]<a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    }
     for(int i=0;i<10;++i)
    {
    printf("%3d ",a[i]);
    }
}
