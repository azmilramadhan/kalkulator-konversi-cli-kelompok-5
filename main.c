#include <stdio.h>
#include <stdlib.h>

void menu() {
    printf("=== KALKULATOR KONVERSI ===\n");
    printf("1. Konversi Suhu\n");
    printf("2. Konversi Jarak\n");
    printf("3. Konversi Berat\n");
    printf("4. Konversi Waktu\n");
    
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void header() {
    printf("\n");
    printf("========================================\n");
    printf("    KALKULATOR KONVERSI SATUAN CLI      \n");
    printf("========================================\n");
}


void menu() {
    printf("\n");
    printf("  [1] Konversi Suhu\n");
    printf("  [2] Konversi Jarak\n");
    printf("  [3] Konversi Berat\n");
    printf("  [4] Konversi Waktu\n");
    printf("  [0] Keluar\n");
    printf("\n");
    printf("  Pilih menu >>> ");
}

void footer() {

    printf("\n=======================================\n");
}

void enterToContinue() {
    printf("\nTekan ENTER untuk kembali...");
    getchar();
}

int main() {
    int pilih;

    do {
        clearScreen();
        header();
        menu();

        scanf("%d", &pilih);
        getchar(); 

        clearScreen();
        header();

        switch(pilih) {
            case 1:
                konversiSuhu();
                break;
            case 2:
                konversiJarak();
                break;
            case 3:
                
                break;
            case 4:
                konversiWaktu();
                break;
            case 0:
                printf("Terima kasih sudah menggunakan program ini.\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }

        footer();

        if(pilih != 0) {
            enterToContinue();
        }

    } while(pilih != 0);
    return 0;
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

void konversiBerat() {
    float kg;
    printf("Masukkan berat (kg): ");
    scanf("%f", &kg);

    if (kg < 0) {
        printf("Input tidak valid!\n");
        return;
    }

    float gram = kg * 1000;
    float pon = kg * 2.20462; // 1 kg = 2.20462 lbs

    printf("\n=== HASIL KONVERSI BERAT ===\n");
    printf("Gram: %.2f g\n", gram);
    printf("Pons: %.2f lbs\n", pon);
}
void konversiWaktu(){
    float jam;
    float menit, detik;

    printf("Konversi Waktu\n");
    printf("Masukkan jumlah jam:");
    scanf ("%f", &jam);

    menit = jam*60;
    detik = jam*3600;

    printf("Hasil konversi\n");
    printf("%.2f jam = %.2f menit\n", jam, menit);
    printf("%.2f jam = %.2f detik\n", jam, detik);
}

