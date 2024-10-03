#include <stdio.h>
#include <string.h>

int main() {
    char nama[100], nik[20], tempat_lahir[50], tanggal_lahir[15], jenis_kelamin[10];
    char alamat[100], agama[20], pekerjaan[50], status_pernikahan[20], kewarganegaraan[20];
    char golongan_darah[5];
    int tinggi_badan;

    // Input data
    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);  // Menggunakan fgets untuk input string
    nama[strcspn(nama, "\n")] = 0; // Menghapus newline dari input

    printf("Masukkan NIK: ");
    fgets(nik, sizeof(nik), stdin);
    nik[strcspn(nik, "\n")] = 0;

    printf("Masukkan Tempat Lahir: ");
    fgets(tempat_lahir, sizeof(tempat_lahir), stdin);
    tempat_lahir[strcspn(tempat_lahir, "\n")] = 0;

    printf("Masukkan Tanggal Lahir (dd-mm-yyyy): ");
    fgets(tanggal_lahir, sizeof(tanggal_lahir), stdin);
    tanggal_lahir[strcspn(tanggal_lahir, "\n")] = 0;

    printf("Masukkan Jenis Kelamin (L/P): ");
    fgets(jenis_kelamin, sizeof(jenis_kelamin), stdin);
    jenis_kelamin[strcspn(jenis_kelamin, "\n")] = 0;

    printf("Masukkan Alamat: ");
    fgets(alamat, sizeof(alamat), stdin);
    alamat[strcspn(alamat, "\n")] = 0;

    printf("Masukkan Agama: ");
    fgets(agama, sizeof(agama), stdin);
    agama[strcspn(agama, "\n")] = 0;

    printf("Masukkan Pekerjaan: ");
    fgets(pekerjaan, sizeof(pekerjaan), stdin);
    pekerjaan[strcspn(pekerjaan, "\n")] = 0;

    printf("Masukkan Status Pernikahan: ");
    fgets(status_pernikahan, sizeof(status_pernikahan), stdin);
    status_pernikahan[strcspn(status_pernikahan, "\n")] = 0;

    printf("Masukkan Kewarganegaraan: ");
    fgets(kewarganegaraan, sizeof(kewarganegaraan), stdin);
    kewarganegaraan[strcspn(kewarganegaraan, "\n")] = 0;

    printf("Masukkan Golongan Darah: ");
    fgets(golongan_darah, sizeof(golongan_darah), stdin);
    golongan_darah[strcspn(golongan_darah, "\n")] = 0;

    printf("Masukkan Tinggi Badan (cm): ");
    scanf("%d", &tinggi_badan);

    // Output data
    printf("\n=== DATA KTP ===\n");
    printf("Nama              : %s\n", nama);
    printf("NIK               : %s\n", nik);
    printf("Tempat Lahir      : %s\n", tempat_lahir);
    printf("Tanggal Lahir     : %s\n", tanggal_lahir);
    printf("Jenis Kelamin     : %s\n", jenis_kelamin);
    printf("Alamat            : %s\n", alamat);
    printf("Agama             : %s\n", agama);
    printf("Pekerjaan         : %s\n", pekerjaan);
    printf("Status Pernikahan : %s\n", status_pernikahan);
    printf("Kewarganegaraan   : %s\n", kewarganegaraan);
    printf("Golongan Darah    : %s\n", golongan_darah);
    printf("Tinggi Badan      : %d cm\n", tinggi_badan);

    return 0;
}

