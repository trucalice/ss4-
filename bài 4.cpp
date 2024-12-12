#include<stdio.h>

int main(){
	int month;
	printf(" hay nhap month (1-12): ");
	scanf("%d",&month);
	if (month > 12 || month < 1) {
		printf(" khong hop le\n");
	}
	else
     if (month == 4|| month == 6|| month == 9|| month == 11){
    	printf(" month %d co 30 day\n",month);
	}
	else if (month == 2){
		printf(" month %d co 28 or 29 day\n",month);
	}
	else {
	     printf(" month %d co 31 day\n",month);
	 }
	return 0;
}
