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
