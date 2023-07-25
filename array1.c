#include<stdio.h>
#define n 5
#define m 10
int main(){
    int a[n],b[m],i,merge[m];
    for(i=0;i<n;i++)
    {
        printf("enter value a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("enter value b[%d]:",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
       merge[i]=a[i];
    }

    for(i=0;i<n;i++)
    {
       merge[i+n]=b[i];
    }
    printf("\nmerge array:");
    for(i=0;i<m;i++)
    {
        printf("\t%d",merge[i]);
    }
}