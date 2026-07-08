int main() {
  
    int pilih;
    string nama, tanggal;

    do {
        cout << "\n===== SISTEM EVENT KAMPUS =====\n";
        cout << "1. Tambah Event\n";
        cout << "2. Tampilkan Event\n";
        cout << "3. Daftar Peserta\n";
        cout << "4. Tampilkan Peserta\n";
        cout << "5. Tampilkan Jadwal\n";
        cout << "6. Struktur Panitia\n";
        cout << "7. Cari Event\n";
        cout << "8. Keluar\n";
        cout << "Pilih : ";
        cin >> pilih;
        cin.ignore();

        switch(pilih) {

        case 1:
            cout << "Nama Event : ";
            getline(cin, nama);

            cout << "Tanggal : ";
            getline(cin, tanggal);

            tambahEvent(nama, tanggal);
            break;

        case 2:
            tampilEvent();
            break;

        case 3:
            cout << "Nama Peserta : ";
            getline(cin, nama);

            daftarPeserta(nama);
            break;

        case 4:
            tampilPeserta();
            break;

        case 5:
            tampilJadwal();
            break;

        case 6:
            tampilPanitia();
            break;

        case 7:
            cout << "Cari Event : ";
            getline(cin, nama);

            cariEvent(nama);
            break;

        case 8:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Menu tidak tersedia!\n";
        }

    } while(pilih != 8);

    return 0;
}
