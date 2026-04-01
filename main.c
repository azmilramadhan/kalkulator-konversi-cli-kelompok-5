#include <stdio.h>

void menu() {
    printf("=== KALKULATOR KONVERSI ===\n");
    printf("1. Konversi Suhu\n");
    printf("2. Konversi Jarak\n");
    printf("3. Konversi Berat\n");
    printf("4. Konversi Waktu\n");
}

int main() {
    int pilihan;
    menu();
    printf("Pilih menu: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Fitur suhu belum tersedia\n");
            break;
        case 2:
            printf("Fitur jarak belum tersedia\n");
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