#include <stdio.h>

int main() {
    char jenisKelamin;
    float tinggiBadan, beratBadan, bmi;

    printf("Masukkan jenis kelamin (L/P): ");
    scanf(" %c", &jenisKelamin);

    printf("Masukkan tinggi badan (meter): ");
    scanf("%f", &tinggiBadan);

    printf("Masukkan berat badan (kg): ");
    scanf("%f", &beratBadan);

    bmi = beratBadan / (tinggiBadan * tinggiBadan);

    printf("Nilai BMI: %.2f\n", bmi);
    if (jenisKelamin == 'L' || jenisKelamin == 'l') {
        if (bmi <= 17 && bmi <= 23) {
            printf("Kategori berat badan: Badan Ideal\n");
        } else if (bmi < 23) {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
        } else {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
        }
    } else if (jenisKelamin == 'P' || jenisKelamin == 'p') {
        if (bmi <= 18 && bmi <= 25) {
            printf("Kategori berat badan: Badan Ideal\n");
        } else if (bmi < 25) {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
        } else {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
        }
    } else {
        printf("Input jenis kelamin tidak valid.\n");
    }

    return 0;
}
