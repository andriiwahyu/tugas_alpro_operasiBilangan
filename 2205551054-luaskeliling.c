#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

float luas(float a, float t)
{
    float luas_segitiga;
    luas_segitiga = 0.5 * a * t;
    return luas_segitiga;
}

float keliling(float a, float t, float sm)
{
    float keliling_segitiga;
    keliling_segitiga = a + t + sm;
    return keliling_segitiga;
}

int main()
{
    float alas, tinggi, sisiMiring;
    int menu;
    char lanjut[2];

    do
    {
        printf("\n||============================================||\n");
        printf("\n             PROGRAM BANGUN DATAR	           \n");
        printf("\n||============================================||\n");
        printf("\n  SILAHKAN PILIH MENU DI BAWAH                  \n");
        printf("\n  1. Luas 							           \n");
        printf("\n  2. Keliling							       \n");
        printf("\n||============================================||\n");
        printf("\nMasukan pilihan : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("\n||====================================||\n");
            printf("\n       PERHITUNGAN LUAS SEGITIGA  	\n\n");
            printf("\n||====================================||\n");
            printf("Input nilai alas: ");
            scanf("%f", &alas);
            printf("Input nilai tinggi: ");
            scanf("%f", &tinggi);
            // menampilkan hasil perhitungan luas
            printf("Luas segitiga adalah = %.2f ", luas(alas, tinggi));
        break;

        case 2:
            printf("\n||====================================||\n");
            printf("\n      PERHITUNGAN KELILING SEGITIGA   \n\n");
            printf("\n||====================================||\n");
            printf("Input nilai alas: ");
            scanf("%f", &alas);
            printf("Input nilai tinggi: ");
            scanf("%f", &tinggi);
            printf("Input nilai sisi miring: ");
            scanf("%f", &sisiMiring);
            // menampilkan hasil perhitungan keliling
            printf("Keliling segitiga adalah = %.2f", keliling(alas, tinggi, sisiMiring));

        break;
        default:
            printf("OPTION NOT FOUND\n");
        break;
        }
        printf("\nApakah anda ingin kembali ke menu? (y/t) : ");
        scanf(" %c", &lanjut);

    }

    while (strcmp(lanjut, "y") == 0);

    fflush(stdin);
    system("cls");
}