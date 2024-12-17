#include<stdio.h>

int main (){
	int year ;
	printf ("nhap nam: ");
	scanf("%d",&year);
	if ((year % 4 == 0 && 100 != 0) ||( year % 400 == 0)){
		printf("%d la nam nhuan: ",year);
	}
	else { 
	printf ("%d khong phai nam nhuan: ",year);
	}
	
	return 0;
}
