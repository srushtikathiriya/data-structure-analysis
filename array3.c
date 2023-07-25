#include<stdio.h>
#define n 5
int main()
{

    int a[10],i,t;

    for(i=0;i<n;i++)
    {
        printf("enter value a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
            if(i==0)
            {
                t=a[i];   //store the first element
                a[i]=a[n-1];    
                a[n-1]=t;      //  first element place at the end
            }
    }
    
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }

}