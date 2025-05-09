#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
char stack[SIZE];
int top = -1;

void push(char c){
	if( top == SIZE - 1){
		printf("Overflow\n");
	}else{
		stack[++top] = c;
	}
}

char pop(){
	if( top == -1 ){
		printf("Underflow\n");
	}else{
		return stack[top--];
	}
}

int main(){
	int len;
	char str[SIZE];
	printf("Enter the string: ");
	scanf("%s", str);
	len = strlen(str);

	for( int i = 0; i < len; i++){
		push(str[i]);
	}

	printf("Reverse string is: ");

	for( int j = 0; j < len; j++){
		str[j] = pop();

		printf("%c", str[j]);
	}
	printf("\n");
	
	return 0;
}


