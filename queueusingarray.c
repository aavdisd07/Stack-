#include <stdio.h>
#include <stdlib.h>

#define max 50

void insert();
void delete ();
void display();
int queue_array[max];
int rear = -1;
int front = -1;
void main()
{
  int choice;
  while (1)
  {
    printf("\n1.Insert elemnet to Queue\n");
    printf("2.Delete element from Queue\n");
    printf("3.Display all elements of queue\n");
    printf("4.quit");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(1);
    default:
      printf("Wrong choice\n");
    }
  }
}
void insert()
{
  int add_item;
  if (rear == max - 1)
    printf("Queue Overflow\n");
  else
  {
    if (front == -1)
      front = 0;
    printf("Insert element in queue: \n");
    scanf("%d", &add_item);
    rear += 1;
    queue_array[rear] = add_item;
  }
}
void delete ()
{
  if (front == -1 || front > rear)
  {
    printf("Queue Underflow\n");
  }
  else
  {
    printf("Element  Deleted from queue is:%d\n", queue_array[front]);
    front += 1;
  }
}
void display()
{
  int i;
  if (front == -1)
  {
    printf("Queue is empty\n");
  }
  else
  {
    printf("Queue is :\n");
    for (i = 0; i <= rear; i++)

      printf( " %d ", queue_array[i]);
    printf("\n");
  }
}