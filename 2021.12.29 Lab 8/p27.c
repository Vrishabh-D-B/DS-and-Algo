#include <stdio.h>
#include <stdlib.h>


struct node {
	int info;
	struct node *prev, *next;
};

struct nodeC {
	int info;
	struct nodeC *next;
};

/*------------------------------DOUBLY-----------------------------------*/

struct node *start = NULL, *tail = NULL;

void doublyCreate() {  
    
    struct node *newNode, *head;
    head = start;
    int i;
    printf("Enter 10 elements: ");
    for (i = 1; i <= 10; i++)
    {   
        newNode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newNode->info);
        
        if(head == NULL) {      
            start = tail = newNode;  
            start->prev = NULL;  
            tail->next = NULL;
            head = start;  
        }  
        else {
            tail->next = newNode; 
            newNode->prev = tail;  
            tail = newNode; 
            tail->next = NULL;  
        }
    } 
}  

void doublyInsertFront(){
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted at front : ");
	scanf("%d", &data);
	temp->info = data;
	temp->prev = NULL;
	temp->next = start;
	start = temp;
    printf("Done\n");
}

void doublyInsertSpecific(){
	int data, pos, i = 1;
	struct node *temp, *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;

	printf("\nInserting at specific position\n");
	printf("Enter position : ");
	scanf("%d", &pos);
	

	
	if (start == NULL) {
		start = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}

	
	else if (pos == 1) {
	    doublyInsertFront();
	}

	
	else {
        printf("Enter number to be inserted at %d position: ",pos);
        scanf("%d", &data);
        newnode->info = data;
        temp = start;
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
	}
    printf("Done");
}

void doublyInsertEnd(){
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\n\nEnter number to be inserted at End : ");
	scanf("%d", &data);
	temp->info = data;
	temp->next = NULL;
	trav = start;

	
	if (start == NULL) {

		start = temp;
	}

	
	else {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
    printf("Done\n");
}

void doublyTraverse(){
    
    if (start == NULL) {
        printf("\nList is empty\n");
        return;
    }
    
    struct node* temp;
    temp = start;
    printf("\nEntered Linked list is : ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}


/*------------------------------CIRCULAR-----------------------------------*/

struct nodeC *last = NULL, *tailC = NULL; 

void circularCreate(){
    struct nodeC *newNode, *head;
    head = last;
    int i;
    printf("Enter 10 elements: ");
    for (i = 1; i <= 10; i++){

        newNode = (struct nodeC*)malloc(sizeof(struct nodeC));
        scanf("%d",&newNode->info);
     
        if(head == NULL){  
            head = tailC = newNode;  
            newNode->next = head;  
        }else { 
            tailC->next = newNode;  
            tailC = newNode;  
            tailC->next = head;  
        }  
    } 
}

void circularInsertFront(){
    
    int data;
 
    
    struct nodeC* temp;
    temp = (struct nodeC*)malloc(sizeof(struct nodeC));
 
    
    printf("\nEnter data to be inserted at front : \n");
    scanf("%d", &data);
 
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
    }
}

void circularInsertSpecific(){

    
    int data, value;
 
    
    struct nodeC *temp, *n;
 
    
    printf("\nEnter number after which"
           " you want to enter number: \n");
    scanf("%d", &value);
    temp = last->next;
 
    do {
 
        
        
        if (temp->info == value) {
            n = (struct nodeC*)malloc(sizeof(struct nodeC));
 
            
            printf("\nEnter data to be inserted : \n");
            scanf("%d", &data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;
 
            
            
            
            if (temp == last)
                last = n;
            break;
        }
        else
            temp = temp->next;
    } while (temp != last->next);
}

void circularInsertEnd(){
	
	int data;

	
	struct nodeC* temp;
	temp = (struct nodeC*)malloc(sizeof(struct nodeC));

	
	printf("\nEnter data to be "
		"inserted : \n");
	scanf("%d", &data);

	
	
	if (last == NULL) {
		temp->info = data;
		temp->next = temp;
		last = temp;
	}

	
	
	
	else {
		temp->info = data;
		temp->next = last->next;
		last->next = temp;
		last = temp;
	}
}

void circularTraverse(){
	
	if (last == NULL)
		printf("\nList is empty\n");

	
	else {
		struct nodeC* temp;
		temp = last->next;
		do {
			printf("\nData = %d",temp->info);
			temp = temp->next;
		} while (temp != last->next);
	}
}


int main()
{
	printf("Choose linked list : \n");
    printf("1. Doubly Linked list\n");
    printf("2. Circular Linked list\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1 :
            doublyCreate();
            doublyTraverse();
            doublyInsertFront();
            doublyInsertSpecific();
            doublyInsertEnd();
            doublyTraverse();
        case 2 :
            circularCreate();
            circularTraverse();
            circularInsertFront();
            circularInsertSpecific();
            circularInsertEnd();
            circularTraverse();

        
        
    }

	return 0;
}
