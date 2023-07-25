#include <stdio.h>
#define n 5

int a[n], top = -1,ch;

void display(){
    int i,val;
    for (i=0;i<=top;i++){
        printf("%d\t",a[i]);
    }
    
    printf("\n");
}

void insert(){
    int val;
    printf("Enter Value is Insert : ");
    scanf("%d",&val);
    if (top>=n-1) {
        printf("Array is full... \n");
    }else{
        top++;
        a[top] = val;
    }
}

void delete(){
    if (top<0) {
        printf("Array is empty... \n");
    }else{
        top--;
    }
}
 void first_insert(){
    int val,i;
    
    printf("Enter Value to Insert: ");
    scanf("%d", &val);

    if (top >=n-1) 
    {
        printf("Array is full....\n"); 
    } 
    else if(top<0)
    {
        top++;
        a[top]=val;
    }
    else
    { 
        top++;
        for (i = top; i >=0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
    }
}

void first_delete() {
    int i,val;
     printf("Enter Value to Insert: ");
     scanf("%d", &val);

    if (top <= 0)
    {
        printf("Array is empty...\n");
    } 
    else if(top<0){
        top--;
        a[top]=val;
    }
    else 
    {
        for (i = 0; i <= top ; i++) 
        {
            a[i] = a[i + 1];
        }
        top--;
    }
}

int main(){

    do{
        printf("\nPress 1 if Insert Array\n");
        printf("Press 2 if Delete Array\n");
        printf("Press 3 if first_Insert Array\n");
        printf("Press 4 if first_Delete Array\n");
        printf("Press 9 if Display Array\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                first_insert();
                break;
            case 4:
                first_delete();
                break;
            case 9:
                display();
                break;
            default:
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/9)");
                break;   
        }
    }while(ch!=0);
   
}
