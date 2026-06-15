#include <iostream>
using namespace std;

// ================== LINKED LIST EVENT ==================
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
