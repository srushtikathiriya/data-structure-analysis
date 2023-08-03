#include <stdio.h>
#define n 5
int f = -1, r = -1,ch,val;
int a[n];

int display()
{
    if (f<0)
    {
        printf("queue is empty...\n");
    } 
    else
    {
    for (int i=f;i<=r;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    printf("\n");
}
int insertEnd()
{
    printf("Enter Value to Insert: ");
    scanf("%d", &val);
    if(r>=n-1)
    {
        printf("queue is full... \n");
    }
    else if(r<0)
    {
        f = r = 0;
        a[r] = val;
    }
    else
    {
        r++;
        a[r]=val;
    }
}
int first_delete()
{
    int val;
    if (f==r)
    {
        printf("queue is empty...\n");
    } 
    else if(f<0)
    {
        f=r=-1;
        a[f]=val;
    }
    else
    {
        f++;
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
                insertEnd();
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
