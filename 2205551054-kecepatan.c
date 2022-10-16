#include <stdio.h>

float kecepatan (float j, float w)
{
    float hitung_kecepatan;
    hitung_kecepatan = j/w;
    return hitung_kecepatan;
}


int main()
{
    float jarak, waktu;

        printf("PERHITUNGAN KECEPATAN \n\n");
        printf("Masukan nilai jarak dalam satuan m: ");
        scanf("%f",&jarak);
        printf("Masukan nilai waktu dalam satuan sekon: ");
        scanf("%f",&waktu);
        printf("Hasil perhitungan kecepatan: %.2f", kecepatan(jarak,waktu));

        return 0;
}

