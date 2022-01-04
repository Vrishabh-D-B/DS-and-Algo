// WAP to find total no of nodes available in a given Linked List.

#include <stdio.h>
#include <malloc.h>
struct node
{
  int data;
  struct node *next;
};

struct node *createLinkedList(struct node *head)
{
  struct node *newNode, *ptr;
  int i;
  printf("Enter 10 elements: ");
  for (i = 1; i <= 10; i++)
  {
    newNode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (head == NULL)
      head = newNode;
    else
      ptr->next = newNode;
    ptr = newNode;
  }
  return head;
}

int count(struct node *head)
{
  struct node *ptr = head;
  int count = 0;
  while (ptr != NULL)
  {
    count++;
    ptr = ptr->next;
  }
  return count;
}

int main()
{
  struct node *head = NULL;
  head = createLinkedList(head);
  printf("Number of Nodes: %d", count(head));
  return 0;
}