#include<stdio.h>

int main(){
	int n;
	printf("hay nhap 1 so (khac0): ");
	scanf("%d",&n);
	if (n % 2 ==0){
    printf("%d là so chan",n);
} else {
    printf("%d la so le",n);
}
return 0;
}
