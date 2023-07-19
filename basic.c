#include<stdio.h>
int main(){
    //int a=1,b=1,c;
    //c = a && b;     //111
    //printf("a:%d,b:%d,c:%d\n",a,b,c);
    //c = ++a && ++b;     //221
    //printf("a:%d,b:%d,c:%d\n",a,b,c);
   // c = --a && ++b;     //010
   // printf("a:%d,b:%d,c:%d\n",a,b,c);
   // c = --a && --b;     //010
   // printf("a:%d,b:%d,c:%d\n",a,b,c);
    //c = a && --b;     //100
    //printf("a:%d,b:%d,c:%d\n",a,b,c);
    //c = a || b;     //111
    //printf("a:%d,b:%d,c:%d\n",a,b,c);
   // c = ++a || b;     //211
    //printf("a:%d,b:%d,c:%d\n",a,b,c);
    //c = ++a || ++b;     //211
    //printf("a:%d,b:%d,c:%d\n",a,b,c);
    //c = ++a || --b;     //211
    //printf("a:%d,b:%d,c:%d\n",a,b,c);
   // c = --a || --b;     //000
   // printf("a:%d,b:%d,c:%d\n",a,b,c);



   int a=1,b=1,c=1,d;
   
   //d = a && b && c;      //1111
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
   //d = a && --b && c;      //1010
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
   //d = a && --b && --c;      //1010
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
   //d = --a && ++b && ++c;      //0110
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
    //d = --a || ++b || ++c;      //0211
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
   //d = --a || --b || ++c;      //0021
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
   //d = a || --b || ++c;      //1111
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
   //d = a || --b && ++c;      //1111
   //printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);
   d = a && --b || ++c;      //1021
   printf("a:%d,b:%d,c:%d,d:%d\n",a,b,c,d);

}