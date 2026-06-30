const int MAX = 10;

string peserta[MAX];
int front = 0;
int rear = -1;
int jumlah = 0;

bool queueKosong() {
    return jumlah == 0;
}
 
bool queuePenuh() {
    return jumlah == MAX;
}

void daftarPeserta(string nama) {
    if(queuePenuh()) {
        cout << "Antrian penuh!\n";
        return;
    }

    rear++;
    peserta[rear] = nama;
    jumlah++;

    cout << nama << " berhasil mendaftar.\n";
}

void tampilPeserta() {
    if(queueKosong()) {
        cout << "Belum ada peserta.\n";
        return;
    }

    cout << "\nDaftar Peserta:\n";
    for(int i = front; i <= rear; i++) {
        cout << i - front + 1 << ". "
             << peserta[i] << endl;
    }
}
