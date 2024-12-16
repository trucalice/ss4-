#include<stdio.h>
int main(){
    int a, b, c;    
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);

    if ((a < c && c < b) || (b < c && c < a)) {
        printf("%d nam giua %d va %d\n", c, a, b);
    } else {
        printf("%d khong nam giua %d va %d\n", c, a, b);
    }
    return 0;
}

