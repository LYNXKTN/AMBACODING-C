/* ===================================================================
                        SAS INFORMATIKA
-----------------------------------------------------------------
Nama Tim    : kata Arkan namanya AMBACODING 100% Halal jadi kita iyain ajah
Anggota     : 1. Azaria Arkana Mulya, 2. Muhammad Wildan Muzakki, 3. Ahmad Nejat Rahmansyah
Kelas       : X-A/B
Tanggal     : 1 Juni 2026 20:37 (GMT+7)
Versi       : 1.1
Catatan     : Tambahan maksimum, minimum, log overheat, normal, dibawah normal
Pelajaran   : Informatika (SAS)
=================================================================== */

#include <stdio.h>

int main() {
	int jumlah_log;
	float suhu, total = 0;
	float rata_rata;
	int i = 1;

	// Added 1.1: Statistik tambahan ---
	float suhu_maksimum;
	float suhu_minimum;
	int total_overheat = 0;
	int total_normal = 0;
	int total_rendah = 0;

	printf("=== SISTEM MONITORING SUHU CPU ===\n");
	printf("Masukkan jumlah pengecekan suhu: ");
	scanf("%d", &jumlah_log);

	if (jumlah_log <= 0) {
		printf("\nJumlah pengecekan tidak valid!\n");
		return 0;
	}

	printf("\n-----------------------------------\n");

	while (i <= jumlah_log) {
		printf("Masukkan data suhu ke-%d (°C): ", i);
		scanf("%f", &suhu);

		total = total + suhu;

		// Added 1.1: Mencari suhu tertinggi & terendah ---
		if (i == 1) {
			suhu_maksimum = suhu;
			suhu_minimum = suhu;
		} else {
			if (suhu > suhu_maksimum) {
				suhu_maksimum = suhu;
			}
			if (suhu < suhu_minimum) {
				suhu_minimum = suhu;
			}
		}

		if (suhu >= 85.0) {
			printf("   Bahaya Overheat.\n");
			total_overheat++;
		} else if (suhu >= 40.0 && suhu < 85.0) {
			printf("   Suhu dalam batas normal.\n");
			total_normal++;
		} else {
			printf("   Suhu terlalu rendah !\n");
			total_rendah++;
		}

		i++;
	}

	rata_rata = total / jumlah_log;

	printf("-----------------------------------\n");
	printf("=== PERFORMA SYSTEM ===\n");
	printf("Total Pengecekan : %d kali\n", jumlah_log);
	printf("Rata-rata Suhu   : %.2f °C\n", rata_rata);
	
	// Added 1.1: Statistik maksimum & minimum ---
	printf("Suhu Tertinggi   : %.2f °C\n", suhu_maksimum);
	printf("Suhu Terendah    : %.2f °C\n", suhu_minimum);
	
	// Added 1.1: Status Summary ---
	printf("-----------------------------------\n");
	printf("=== STATUS SUMMARY ===\n");
	printf("Total Overheat      : %d kali\n", total_overheat);
	printf("Total Normal        : %d kali\n", total_normal);
	printf("Total Suhu Rendah   : %d kali\n", total_rendah);

	return 0;
}
