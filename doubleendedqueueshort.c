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
int insert_End()
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
int delete_End(){
    if (r < 0)
    {
        printf("\n\tQueue is Empty..\n");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}


int first_Insert()
{
    printf("Enter Value to Insert: ");
    scanf("%d", &val);

    if(f<0)
    { 
        f=r=0;
        a[f]=val;
    }
    else if(f==0)
    printf("\nnot added to this position");
    else
    { 
        f--;
        a[f] = val;
    }
}

int first_delete()
{
    if (f<0)
    {
        printf("queue is empty...\n");
    } 
    else if (f==r)
    {
        f=r=-1;
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
        printf("\nPress 1 if Insert End queue\n");
        printf("Press 2 if Delete End queue\n");
        printf("Press 3 if first insert queue\n");
        printf("Press 4 if first Delete queue\n");
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
                delete_End();
                break;
            case 3:
                first_Insert();
                break;
            case 4:
                first_delete();
                break;
            case 9:
                display();
                break;
            case 0:
                break;

            default:
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/9/0)");
                break;   
        }
    }while(ch!=0);
   
}
