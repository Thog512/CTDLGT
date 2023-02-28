#include <stdio.h>
#include <conio.h>
int Tong(int n){
	if(n==1){
		return 1;
	}
	return Tong(n-2)+n;
}
int main(){
	int n,S;
	do{	
	printf("Nhap mot so le n=\n");
	scanf("%d",&n);
	if (n%2==0)
		{
		printf("**n phai la so le**");
		};
	}while (n%2==0);
	S=Tong(n);
	printf("S=%d",S);
	getch ();
	return 0; 
}

