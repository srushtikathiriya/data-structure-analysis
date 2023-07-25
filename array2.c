#include<stdio.h>
#define n 5
int main(){
    int a[10],i,j,t;

    for(i=0;i<n;i++)
    {
        printf("enter value a[%d]:",i);
        scanf("%d",&a[i]);
    }

    t=a[0];     //store the first element 
    
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];   //incr element one position
    }

    a[n-1]=t;   // first element place at the end
    
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
   
}