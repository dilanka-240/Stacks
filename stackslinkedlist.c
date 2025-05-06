#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *top = NULL;

void push(){
	int x;
	printf("Enter the data: ");
	scanf("%d", &x);

	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));

        if( newnode == NULL){
		printf("Overflow\n");
	}else{

	newnode -> data = x;
	newnode -> next = top;
	top = newnode;
	printf("%d data was added\n", x);
	}
}

void pop(){
	if ( top == NULL){
		printf("Underflow\n");
	}else{
		struct node *temp = top;
		printf("%d data was removed\n", top -> data);
		top = top -> next;
		free(temp);
	}
}

void peek(){
	if ( top == NULL){
		printf("Underflow\n");
	}else{
		printf("%d is last added\n", top -> data);
	}
}

int main(){
	int choice;
	do{
		printf("\n1.Add\n");
		printf("2.Remove\n");
		printf("3.Read\n");
		printf("4.Exit\n");
		printf("Enter the choice: ");
		scanf("%d", &choice);

		switch( choice ){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			defult:
				printf("\nInvail input\n");
				
			}
	}while( choice != 4 );
	return 0;
}


