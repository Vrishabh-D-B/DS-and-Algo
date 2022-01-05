#include <stdio.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

int getCount(struct node *head)
{
  int count = 0;
  struct node *ptr = head;
  while (ptr->next != head)
  {
    count++;
    ptr = ptr->next;
  }
  return count;
}

struct node *createCircularLinkedList()
{
  int i, input;
  struct node *newNode, *head = NULL, *ptr;
  printf("Enter 10 elements: ");
  for (i = 1; i <= 10; i++)
  {
    newNode = malloc(sizeof(struct node));
    scanf("%d", &newNode->data);
    if (head == NULL)
      head = newNode;
    else
    {
      ptr = head;
      while (ptr->next != head)
        ptr = ptr->next;
      ptr->next = newNode;
      newNode->prev = ptr;
    }
    newNode->next = head;
  }
  return head;
}

int main()
{
  struct node *head = createCircularLinkedList();
  printf("Number of elements in Circular Linked List is: %d\n", getCount(head));
  return 0;
}