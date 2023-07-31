#include<stdio.h>
#include<stdlib.h>
#define n 20
int a[n], i,val;
int Linear_Search(int a[], int v){
    for(i=0;i<n;i++){
        if(v==a[i])
           break;
    }
    if(i<n)
       printf("\nYour Value in Array of Index Num : %d",i);
    else
        printf("\nYour Element Not Found..");
}
int main(){
    for(i=0;i<n;i++){
        a[i]=rand()%50;        // Generat Random Array
        printf("%d:[%d]  ",i,a[i]);
    }
    printf("\n\nEnter Value For Search : ");
    scanf("%d",&val);
    Linear_Search(a,val);
}
