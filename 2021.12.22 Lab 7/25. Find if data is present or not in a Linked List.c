// WAP to find the given key/data value is present in the linked list.

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

int search(struct node *head, int n)
{
  struct node *ptr = head;
  while (ptr != NULL)
  {
    if (ptr->data == n)
      return 1;
    ptr = ptr->next;
  }
  return 0;
}

int main()
{
  struct node *head = NULL;
  head = createLinkedList(head);
  int n;

  printf("Enter data to search: ");
  scanf("%d", &n);

  if (search(head, n) == 1)
    printf("Found");
  else
    printf("Not found");

  return 0;
}