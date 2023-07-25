#include<stdio.h>
int main()
{
    int a=10;
    //printf("a:%d,a:%d",a,a++);      //11 10
   // printf("a:%d,a:%d",a++,a++);      //11 10
    //printf("a:%d,a:%d",a,++a);          //11 11
    //printf("a:%d,a:%d",a++,++a);       //11 12
    //printf("a:%d,a:%d,a:%d",a,a++,++a);   //12 11 12
    //printf("a:%d,a:%d,a:%d",a++,a++,++a);    //12 11 13
    printf("a:%d,a:%d,a:%d",++a,a++,++a);      //13 11 13
}



//two array and merge it
//10 20 30 40 50 -->20 30 40 50 10
//10 20 30 40 50 -->50 20 30 40 10