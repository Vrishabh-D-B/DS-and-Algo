#include <stdio.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *createDoublyLinkedList()
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

void printDoublyLinkedList(struct node *head)
{
  struct node *ptr = head;
  while (ptr->next != head)
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("%d\n", ptr->data);
}

int main()
{
  struct node *head = createDoublyLinkedList();
  printDoublyLinkedList(head);
  return 0;
}