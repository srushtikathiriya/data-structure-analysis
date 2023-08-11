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
        while(ptr!=NULL)
        {
            printf(" % d",ptr->data);
            ptr=ptr->next;
        }
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
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
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
    while(ptr->next!=NULL)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    return;
}
void first_insert()
{
 
    int val;
    printf("Enter Value to Insert: ");
    scanf("%d", &val);

   struct node *ptr = head;
   struct node *temp = malloc(sizeof(struct node));
   temp->data=val;
   temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
        return;
    }
    else
    {
        ptr=head; 
        temp->next = ptr; 
        head = temp;
        return;
    }
}
void first_delete()
{
   struct node *ptr = head;
 
  if(head == NULL)
  {
    printf("link is empty  now... ");
  }
  else
  {
      head = ptr->next ;
      free(ptr);
  }
   
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
    {
       ptr=ptr->next;
       temp->next=ptr->next;
       ptr->next=temp;
       return;
    }
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
