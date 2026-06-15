string jadwal[5] = {
    "Pembukaan",
    "Seminar",
    "Workshop",
    "Diskusi",
    "Penutupan"
};

void tampilJadwal() {
    cout << "\nJadwal Acara:\n";

    for(int i = 0; i < 5; i++) {
        cout << i + 1 << ". "
             << jadwal[i] << endl;
    }
}