#include <stdio.h>
#include <conio.h>

int GT(int n){
	if (n==0 || n==1)
		return 1;
	return n * GT(n-1);
} 

int main()
{
	int n;
	printf("Nhap n bat ky: \n");
	scanf("%d", &n);
	printf("Giai thua cua %d = %d", n, GT(n));
	getch();
	return 0;
}
