// WAP to print the elements of the given linked list

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
  for (int i = 1; i <= 10; i++)
  {
    newNode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (head == NULL)
      head = newNode;
    else
    {
      ptr = head;
      while (ptr->next != NULL)
        ptr = ptr->next;
        ptr->next = newNode;
    }
  }
  return head;
}

void printLinkedList(struct node *head)
{
  struct node *ptr;
  ptr = head;
  while (ptr != NULL)
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
}

int main()
{
  struct node *head = NULL;
  head = createLinkedList(head);
  printLinkedList(head);
  return 0;
}