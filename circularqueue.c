#include <stdio.h>
#define n 5
int f = -1, r = -1,val,ch;
int a[n];

int display()
{
    int i=f;
    if (f<0)
    {
        printf("queue is empty...\n");
    } 
    else
    {
        do
        {
            printf("%d\t",a[i]);
            i=(i+1)%n;
        }while(i!=(r+1)%n);
    }
}
int insert_End(){
    printf("Enter Value to Insert: ");
    scanf("%d", &val);
    if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else if((r+1)%n==f)
    {
        printf("queue is full..... \n");
    }
    else
    {
       r = (r+1) % n;
       a[r]=val;
    }
}
int first_delete()
{
    if (f < 0)
    {
        printf("queue is empty...\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1) % n;
    }
}

int main()
{
  do
    {
        printf("\nPress 1 if Insert queue\n");
        printf("Press 2 if Delete queue\n");
        printf("Press 9 if display queue\n");
        printf("Press 0 to Exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert_End();
                break;
            case 2:
                first_delete();
                break;
            case 9:
                display();
                break;
            case 0:
                break;
            default:
                printf ("\n\t Please Enter a Valid Choice(1/2/9/0)");
                break;   
        }
    }while(ch!=0);
}