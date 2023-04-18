#include <stdio.h>
#define maxsize 6

int stack[maxsize];
int top = -1;

int isempty(){
	if(top == -1){
		return 1;
	}else
		return 0;
}

int isfull(){
	if(top == maxsize-1){
		return 1;
	}else
		return 0;
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
	push(41);
	push(23);
	push(4);
	push(14);
	push(56);
	push(1);


	printf("Phan tu dau ngan xep la: %d\n", pop());
	
	
	printf("Phan tu con lai la: ");
	for(int i=top; i>=0; i--){
		printf("%d ", stack[i]);
	}
	return 0;

}
