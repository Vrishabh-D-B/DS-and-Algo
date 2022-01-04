// WAP to insert the new node at the beginning of the given linked list

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

void printLinkedList(struct node *head)
{
  struct node *ptr = head;
  while (ptr != NULL)
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
}

struct node *insertBeginning(struct node *head)
{
  struct node *newNode;
  newNode = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter value for beginning: ");
  scanf("%d", &newNode->data);
  newNode->next = head;
  head = newNode;
  return head;
}

void *insertEnding(struct node *head)
{
  struct node *newNode, *ptr = head;
  newNode = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter value for ending: ");
  scanf("%d", &newNode->data);
  while (ptr->next != NULL)
    ptr = ptr->next;
  newNode->next = NULL;
  ptr->next = newNode;
}

int main()
{
  struct node *head = NULL;
  head = createLinkedList(head);
  printf("Before adding new element: ");
  printLinkedList(head);

  head = insertBeginning(head);

  printf("After adding in beginning: ");
  printLinkedList(head);

  insertEnding(head);

  printf("After adding in end: ");
  printLinkedList(head);
  return 0;
}