#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
int choice;
while (1)
{
printf("\n 1.Insert element to queue \n 2.Delete element from queue \n 3.Display all elements of queue \n 4.Quit \n");
printf("\nEnter your choice : ");
scanf("%d", &choice);
        switch(choice)
            {
            case 1:insert();
                    break;
            case 2:delete();
                    break;
            case 3: display();
                    break;
            case 4:exit(1);
            default:printf("Wrong choice n");
             }
 }
}
void insert()
  {
    int item;
    if(rear == MAX - 1)
    printf("Queue Overflow <<<<<<<>>>>>>>>>>");
  else
    {
     if(front== - 1)
     front = 0;
     printf("Inset the element in queue : ");
     scanf("%d", &item);
     rear = rear + 1;
     queue_array[rear] = item;
    }
 }
void delete()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow>>>>>>><<<<<<<<");
return;
}
else
{
printf("Element deleted from queue is : %d", queue_array[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("\nQueue is empty>>><<<<<`1");
else
{
printf("\nQueue is :");
for(i = front; i <= rear; i++)
printf("%d ", queue_array[i]);

}
}
