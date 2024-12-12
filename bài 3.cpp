#include<stdio.h>

int main(){
	int n;
	printf("hay nhap 1 so : ");
	scanf("%d",&n);
	if (n % 3 ==0 && n % 5 == 0){
		printf("%d chia het cho 3 va 5",n );
	}
	else
	if (n % 3 == 0 && n % 5 != 0){
		printf("%d chia het cho 3 va 5 khong",n);
	}
	return 0;
}
