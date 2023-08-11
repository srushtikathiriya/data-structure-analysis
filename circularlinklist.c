#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void display()
{
    struct node *ptr = head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else{
        while(ptr->next!=head)
        {
            printf(" % d",ptr->data);
            ptr=ptr->next;
        }
        printf(" % d",ptr->data);
    }
    printf("\n");
}
void insert_End()
{
    int val;
    printf("Enter Value to Insert: ");
    scanf("%d", &val);

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data=val;

    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next=temp;
    temp->next=head;
    return;
}
void delete_End()
{
    struct node *ptr = head;
    struct node *p;

    if(head->next==NULL)
    {
        head=NULL;
        free(ptr);
        return;
    }
    

    while(ptr->next!=head)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
   
}
void first_insert()
{
    int val;
    printf("Enter Value to Insert: ");
    scanf("%d", &val);

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data=val;

    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next=temp;
    temp->next=head;
    head=temp;
    return;
}

void first_delete()
 {
     struct node *ptr=head;
    struct node *p= head;

    while(ptr->next!=head)
          ptr = ptr->next;
    ptr->next=p->next;
     
    head=p->next;

    free(p);
 
    
}

void mid_insert()
{
    int position;
    printf("Enter position to Insert: ");
    scanf("%d", &position);

    int val;
    printf("Enter val to Insert: ");
    scanf("%d", &val);

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data=val;

    while(ptr->data!=position)
       ptr=ptr->next;
       temp->next=ptr->next;
       ptr->next=temp;

}
void mid_delete()
{
    int position;
    printf("Enter position to Insert: ");
    scanf("%d", &position);

    struct node *p;
    struct node *ptr = head;
    while(ptr->data!=position)
    {
        p=ptr;
        ptr = ptr->next;
    }  
        p->next = ptr->next ;
        free(ptr); 
}
int main()
{
     int ch;
    do
    {
        printf("\nPress 1 if Insert End\n");
        printf("Press 2 if Delete End\n");
        printf("Press 3 if First Insert \n");
        printf("Press 4 if First Delete \n");
        printf("Press 5 if mid Insert \n");
        printf("Press 6 if mid Delete \n");
        printf("Press 9 if display\n");
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
                first_insert();
                break;
            case 4:
               first_delete();
               break;
            case 5:
                mid_insert();
               break;
            case 6:
                mid_delete();
                break;
            case 9:
                display();
                break;
            case 0:
                break;
            default:
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6/9/0)");
                break;   
        }
    }while(ch!=0);
    
}
