#include<stdio.h>

int main(){
	int a,b,c;	
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("nhap c: ");
	scanf("%d",&c);
	if (c - a == 1 && c + 1 == b){
		printf("%d%d%d",a,c,b);
	}
	else {
	printf ("%d khong nam giua %d va %d",c,a,b);
}
	return 0;
}
	
	
