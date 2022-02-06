#include <stdio.h>
int main(){
    int a, ac, aac, ab, bc;
    int hasil1, hasil2;
    while (1){
        printf("ini adalah menu awal\n1. Untuk Penjumlahan\n");
        printf("2. Untuk Pengurangan\n3. Untuk Exit");
        scanf("%d", &a);

        switch(a){
            case 1:
            printf("masukan angka pertama =");
            scanf("%d", &ab);
            printf("masukan angka kedua =");
            scanf("%d", &bc);

            hasil1 = ab + bc;

            printf("Hasil dari Penjumlahan ini adalah = %d", hasil1);
            break;

            case 2:
            printf("masukan angka pertama =");
            scanf("%d", &ac);
            printf("masukan angka kedua =");
            scanf("%d", &aac);

            hasil2 = ab - bc;

            printf("Hasil dari Pengurangan ini adalah = %d", hasil2);
            break;
        }
        if(a == 3){
            break;
        }
    }
    
  
}
