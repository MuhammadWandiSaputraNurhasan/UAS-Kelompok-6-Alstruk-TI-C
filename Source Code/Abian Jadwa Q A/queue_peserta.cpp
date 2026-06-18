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


