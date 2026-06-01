/* ===================================================================
SAS INFORMATIKA
-----------------------------------------------------------------
Nama Tim    : kata arkan namanya AMBACODING 100% Halal jadi kita iyain ajah
Anggota     : 1. Azaria Arkana Mulya, 2. Muhammad Wildan Muzakki, 3. Ahmad Nejat Rahmansyah
Kelas       : X-A/B
Pelajaran   : Informatika (SAS)
=================================================================== */

#include <stdio.h>

int main() {
    int jumlah_log;          
    float suhu, total = 0;   
    float rata_rata;
    int i = 1;               

    printf("=== SISTEM MONITORING SUHU CPU===\n");
    printf("Masukkan jumlah pengecekan suhu: ");
    scanf("%d", &jumlah_log); 

    printf("\n-----------------------------------\n");

        while (i <= jumlah_log) {
        printf("Masukkan data suhu ke-%d (°C): ", i);
        scanf("%f", &suhu); 

        total = total + suhu; 

        if (suhu >= 85.0) {
            printf("   Suhu ekstrem! Bahaya Overheat.\n", ">= 85 C"); 
        } else if (suhu >= 40.0 && suhu < 85.0) {
            printf("   Suhu dalam batas normal.\n");
        } else {
            printf("   Suhu terlalu rendah (< 40 C)!\n");
        }

        i++; 
    }

    rata_rata = total / jumlah_log;

    printf("-----------------------------------\n");
    printf("=== LAPORAN PERFORMA SYSTEM ===\n");
    printf("Total Pengecekan : %d kali\n", jumlah_log);
    printf("Rata-rata Suhu   : %.2f °C\n", rata_rata); 

    return 0; 
}
