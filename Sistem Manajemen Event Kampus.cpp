#include <iostream>
using namespace std;

// ================== LINKED LIST EVENT (RAFI) ==================
struct Event {
    string nama;
    string tanggal;
    Event* next;
};

Event* head = NULL;

void tambahEvent(string nama, string tanggal) {
    Event* baru = new Event;
    baru->nama = nama;
    baru->tanggal = tanggal;
    baru->next = NULL;

    if(head == NULL) {
        head = baru;
    } else {
        Event* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = baru;
    }
}

void tampilEvent() {
    Event* temp = head;

    if(temp == NULL) {
        cout << "Belum ada event!\n";
        return;
    }

    cout << "\nDaftar Event:\n";
    while(temp != NULL) {
        cout << "- " << temp->nama
             << " | " << temp->tanggal << endl;
        temp = temp->next;
    }
}

// ================== CARI EVENT (WANDI) ==================
void cariEvent(string cari) {
    Event* temp = head;

    while(temp != NULL) {
        if(temp->nama == cari) {
            cout << "\nEvent ditemukan\n";
            cout << "Nama    : " << temp->nama << endl;
            cout << "Tanggal : " << temp->tanggal << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Event tidak ditemukan!\n";
}

// ================== QUEUE PESERTA (ABIAN) ==================
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

// ================== ARRAY JADWAL (ATAR) ==================
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

// ================== STRUKTUR PANITIA (ATAR) ==================
void tampilPanitia() {
    cout << "\nStruktur Kepanitiaan\n";
    cout << "Ketua      : Wandi\n";
    cout << "Sekretaris : Abian\n";
    cout << "Bendahara  : Rafi\n";
    cout << "Divisi Acara\n";
    cout << "Divisi Konsumsi\n";
    cout << "Divisi Dokumentasi\n";
}

// ================== MAIN (WANDI) ==================
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
