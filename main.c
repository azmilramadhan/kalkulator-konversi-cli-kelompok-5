#include <stdio.h>

void menu() {
    printf("=== KALKULATOR KONVERSI ===\n");
    printf("1. Konversi Suhu\n");
    printf("2. Konversi Jarak\n");
    printf("3. Konversi Berat\n");
    printf("4. Konversi Waktu\n");
    
}

void konversiSuhu() {
    float c, f, k;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;
    k = c + 273.15;        

    printf("\n=== HASIL KONVERSI SUHU ===\n");
    printf("Celcius    : %.2f °C\n", c);
    printf("Fahrenheit : %.2f °F\n", f);
    printf("Kelvin     : %.2f K\n", k);
}

void konversiJarak() {
    float km;
    printf("Masukkan jarak (km): ");
    scanf("%f", &km);

    if (km < 0) {
        printf("Input tidak valid!\n");
        return;
    }

    float meter = km * 1000;
    float cm = km * 100000;

    printf("Hasil konversi:\n");
    printf("Meter: %.2f m\n", meter);
    printf("Centimeter: %.2f cm\n", cm);
}

int main() {
    int pilihan;
    menu();
    printf("Pilih menu: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            konversiSuhu();
            break;
        case 2:
            konversiJarak();
            break;
        case 3:
            printf("Fitur berat belum tersedia\n");
            break;
        case 4:
            printf("Fitur waktu belum tersedia\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
    }

    return 0;
}