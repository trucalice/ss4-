#include <stdio.h>

int main() {
    int oldnumber, newnumber, n; 
    
        printf("Nhap chi so cu: ");
        scanf("%d", &oldnumber);
        printf("Nhap chi so moi: ");
        scanf("%d", &newnumber);

        if (newnumber > oldnumber) {
            printf("Loi: Chi so moi phai lon hon hoac bang chi so cu. Vui long nhap lai!\n");
        }
    n = oldnumber - newnumber;
    int tien_dien = 0;
    if (n <= 50) {
        tien_dien = n * 10000;
    } else if (n <= 100) {
        tien_dien = (50 * 10000) + (n - 50) * 15000;
    } else if (n <= 150) {
        tien_dien = (50 * 10000) + (50 * 15000) + (n - 100) * 20000;
    } else if (n <= 200) {
        tien_dien = (50 * 10000) + (50 * 15000) + (50 * 20000) + (n - 150) * 25000;
    } else {
        tien_dien = (50 * 10000) + (50 * 15000) + (50 * 20000) + (50 * 25000) + (n - 200) * 30000;
    }
    printf("So dien tieu thu: %d kWh\n", n);
    printf("Tong tien dien: %d VND\n", tien_dien);

    return 0;
}

