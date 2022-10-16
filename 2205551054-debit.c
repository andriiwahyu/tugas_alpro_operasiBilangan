#include <stdio.h>

float debitAir (float v, float t)
{
    float hitung_debitAir;
    hitung_debitAir = v/t;
    return hitung_debitAir;
}

int main()
{
    float volume, waktu;

        printf("PERHITUNGAN DEBIT AIR \n\n");
        printf("Input volume air dalam satuan m^3: ");
        scanf("%d",&volume);
        printf("Masukan nilai waktu dalam satuan menit: ");
        scanf("%d",&waktu);
        printf("Hasil perhitungan debit air: %.2f m^3/menit", debitAir(volume, waktu));

        return 0;
}

