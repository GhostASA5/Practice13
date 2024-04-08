#include <iostream>

using namespace std;

void fillArray(double[], int, double);
void fillArray(int[], int, int);

void fillArray(double data[], int size, double value = 0) {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";      
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        data[i] = value;
        cout << data[i] << " ";
    }
    cout << endl;
}

void fillArray(int data[], int size, int value = 0) {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";      
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        data[i] = value;
        cout << data[i] << " ";
    }
    cout << endl;
}