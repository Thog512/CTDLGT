#include<stdio.h>
#include<conio.h>
int tong(int n){
	if(n==0 || n%2!=0){
		return 0;
	}
	return tong(n-2)+n;
}
int main(){
	int n,S;
	printf("Nhap mot so chan n=\n");scanf("%d",&n);
	S=tong(n);
	printf("S=%d",S);
	getch ();
	return 0; 
}

