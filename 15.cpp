#include <iostream>

using namespace std;

void eraseFromArray (int[], int&, int);
void eraseFromArray (double[], int&, int);

void eraseFromArray (int data[], int& size, int position) {
    for (int i = position; i < size-1; i++) {
        data[i] = data[i+1];
    }
    size -= 1;
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void eraseFromArray (double data[], int& size, int position) {
    for (int i = position; i < size-1; i++) {
        data[i] = data[i+1];
    }
    size -= 1;
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}


