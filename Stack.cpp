#include <stdio.h>

int maxsize = 8;
int stack[8];
int top = -1;

int isempty(){
	if(top == -1){
		return 1;
	}else
		return 0;
}

int isfull(){
	if(top == maxsize){
		return 1;
	}else
		return 0;
}

int peek(){
	return stack[top];
}

int pop(){
	int data;
	if(!isempty()){
		data = stack[top];
		top = top - 1;
		return data;
	}else{
		printf("Khong co phan tu trong ngan xep \n");
	}
}

int push(int data){
	if(!isfull()){
		top = top + 1;
		stack[top] = data;
	}else{
		printf("Ngan xep da day!! \n");
	}
}

int main(){
	push(7);
	push(1);
	push(2);
	push(4);
	push(5);
	push(3);
	push(9);
	push(8);

	printf("Phan tu dau ngan xep la: %d\n", peek());
	printf("Phan tu: ");
	
	while(!isempty()){
		int data = pop();
		printf("%d\n", data);
	}
	
	printf("Ngap xep day: %s\n", isfull()?"true":"false");
	printf("Ngan xep trong: %s\n", isempty()?"true":"false");
}
