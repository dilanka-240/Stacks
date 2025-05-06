#include <stdio.h>
#include <stdlib.h>

#define N 5
int stacks[N];
int top = -1;

void push(){
	int x;
	printf("\nEnter the data: ");
	scanf("%d", &x);

	if( top == N -1 ){
		printf("Overflow\n");
	}else{
		top++;
		stacks[top] = x;
		printf("%d is added\n", x);
	}
}

void pop(){
	if ( top == -1 ){
		printf("Underflow\n");
	}else{
		top--;
		printf("last added data was removed\n");
	}
}

void peek(){
	if( top == -1 ){
		printf("Underflow\n");
	}else{
		printf("%d is last added data\n", stacks[top]);
	}
}

int main(){
	int choice;
	do{
		printf("\n1.Add\n");
		printf("2.Remove\n");
		printf("3.Read\n");
		printf("4.Exit\n");
		printf("Enter the your choice: ");
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
				printf("Invaild input");
			}

		}while( choice != 4 );
		return 0;
	}
