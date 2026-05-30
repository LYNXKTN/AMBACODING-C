#include <stdio.h>

int main() {
    int jumlah_log;          
    float suhu, total = 0;   
    float rata_rata;
    int i = 1;               

    printf("=== SISTEM MONITORING SUHU HARDWARE BY AMBACODING TEAM ===\n"); //By KING ARKAN, Wildan, Nejat
    printf("Masukkan berapa kali pengecekan suhu: ");
    scanf("%d", &jumlah_log); 

    printf("\n-----------------------------------\n");

        while (i <= jumlah_log) {  //PERULANGAN (Nejat)
        printf("Masukkan data suhu ke-%d (°C): ", i);
        scanf("%f", &suhu); 

        total = total + suhu; 

        //If-Else (Kerjain supri)
        if (suhu >= 85.0) {
            printf("   [PERINGATAN] Suhu ekstrem (%s)! Bahaya Overheat.\n", ">= 85 C"); //Bahasanya benerin sup
        } else if (suhu >= 40.0 && suhu < 85.0) {
            printf("   [INFO] Suhu dalam batas normal (40 C - 84.9 C).\n"); //Ini juga
        } else {
            printf("   [PERINGATAN] Suhu terlalu rendah (< 40 C)! Kurang optimal.\n"); //Ini juga
        }

        i++; 
    }

    //Itung (nejat)
    rata_rata = total / jumlah_log;

    printf("-----------------------------------\n");
    printf("=== LAPORAN PERFORMA SYSTEM ===\n");
    printf("Total Pengecekan : %d kali\n", jumlah_log);
    printf("Rata-rata Suhu   : %.2f °C\n", rata_rata); 

    return 0; 
}