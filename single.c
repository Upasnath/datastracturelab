#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 };
 struct node *head;
 void insertion();
 void insertion_at_end();
 void insertion_at_position();
 void delete();
 void delete_at_end();
 void delete_at_position();
 void display();
 void main()
 {
 int ch;
  while(ch!=8)
    {
      printf("      ......Choose one option from the list.......");
      printf("\n......................................................\n");
      printf("1.Insertion\n2.Insertion at end\n3.Insertion at position\n4.Delection\n5.Delection_at_end\n6.Display\n7.Exit\n");
      printf("Enter your choice:");
      scanf("%d",&ch);
                switch(ch)
                {
                case 1:insertion();
                    break;
                case 2:insertion_at_end();
                    break;
                case 3:insertion_at_position();
                    break;
                case 4:delete();
                    break;
                case 5:delete_at_end();
                    break;

                case 6:display();
                    break;
                case 7:exit(0);
                    break;
                default:
                        printf("\nInvalid choice....");
                }
        }

 }
  void insertion()
  {
  struct node *newnode;

(struct node *)malloc(sizeof(struct node*));
    if(head==NULL)
    {
    printf("\noverflow..!!!");
    }
    else
        printf("\nEnter the value:");
        scanf("%d",&newnode);
        newnode->next=head;
        head=newnode;
        printf("\nNode inserted at begining...");
  }
  void insertion_at_end()
  {
  struct node *temp,*newnode;

  temp=(struct node*)malloc(sizeof(struct node*));
    if(head==NULL)
    {
    printf("\nEnter the value:");
    scanf("%d",&newnode);
        newnode->next=NULL;
        head=newnode;
    }
    else
    printf("\nEnter the value:");
    scanf("%d",&newnode);
    temp=head;
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    printf("\nNode inserted at end...");
    }
    void insertion_at_position()
    {
     struct node *newnode,*temp;
     int key;
  (struct node *)malloc(sizeof(struct node*));
   printf("\nEnter the data after which node is to be inserted:");
    scanf("%d",&key);
    if(head==NULL)
    {
    printf("\nlist is empty insertion not possiable...!\n");
    }
    else
    {
        struct node *temp=head;
        printf("\nEnter the value:");
        scanf("%d",&newnode);
        while(temp->data!=key&&temp->next!=NULL)
        temp=temp->next;
    }
        if(temp->data!=key)
        {
        printf("\nkey not found\n");
        }
        else
        {
        newnode->next=temp->next;
        temp->next=newnode;

        }
    }
 void delete()
 {
 struct node *temp;
 if(head==NULL)
 {
 printf("list is empty delection is not possible\n");
 }
 else
 {
 head=temp->next;
 free(temp);
 printf("\ndelete node...\n");
 }
 }
 void delete_at_end()
 {
 struct node *temp, *temp1;
 if(head==NULL)
 {
 printf("list is empty delection is not possible\n");
 }
 else
 {
  temp=head;
 while(temp->next!=NULL)
  {
    temp1=temp;
    temp=temp->next;
  }
 temp1->next=NULL;
 free(temp);
 printf("\ndelete node...\n");
 }
 }
 void display()
 {
 struct node * temp;
 temp=head;
 if(temp==NULL)
 {
  printf("\noverflow..!!!");
 }
 else
 {
 while(temp!=NULL)
 {
 printf("\n%d",temp->data);
 temp=temp->next;
 }
 }

 }


