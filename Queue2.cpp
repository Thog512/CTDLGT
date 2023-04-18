#include <stdio.h>
#define max 100

typedef struct queue{
	int a[max];
	int front, rear;
};

typedef struct queue Q;

void init(Q &q){
	q.front = 0;
	q.rear = -1;
}

int isempty(Q &q){
	if(q.front > q.rear){
		return 1;
	}return 0;
}

int isfull(Q &q){
	if(q.rear == max-1){
		return 1;
	}return 0;
}

int add(Q &q, int x){
	if(isfull(q) == 0){
		q.rear++;
		q.a[q.rear] = x;
	}
}

int remove(Q &q){
	int x;
	if(!isempty(q)){
		x = q.a[q.front];
		q.front++;
		return x;
	}
	else{
		q.front = 0; q.rear = -1;
	}
}

int input(Q &q, int n){
	for(int i=0; i<n; i++){
		int x;
		printf("Nhap gia tri phan tu thu %d: ", i);
		scanf("%d", &x);
		add(q, x);
	}
}

int output(Q &q){
	for(int i = q.front; i <= q.rear; i++){
		printf("%d ", q.a[i]);
	}
}

int main(){
	queue q;
	init(q);
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	input(q, n);
	printf("Cac phan tu vua them vao queue la: \n");
	output(q);
	int x = 66;
	add(q, x);
	printf("\nHang doi sau khi add la: \n");
	output(q);
	int front = remove(q);
	printf("\nHang doi sau khi remove la: \n", front);
	output(q);
}
