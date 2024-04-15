#include <iostream>

using namespace std;

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

int arraySum (int data[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum;
}

double arraySum (double data[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum;
}

int arrayMax(int data[], int size, bool is_first = true) {
    int lmax, index = 0;
    if (is_first == true) {
        lmax = data[0];
        for (int i = 0; i < size; i++) {
            if (data[i] > lmax) {
                lmax = data[i];
                index = i;
            }
        }
    } else {
        lmax = data[size];
        for (int i = size-1; i >= 0; i--) {
            if (data[i] > lmax) {
                lmax = data[i];
                index = i;
            }
        }
    }
    return index;
}

int arrayMax(double data[], int size, bool is_first = true) {
    double lmax;
    int index = 0;
    if (is_first == true) {
        lmax = data[0];
        for (int i = 0; i < size; i++) {
            if (data[i] > lmax) {
                lmax = data[i];
                index = i;
            }
        }
    } else {
        lmax = data[size];
        for (int i = size-1; i >= 0; i--) {
            if (data[i] > lmax) {
                lmax = data[i];
                index = i;
            }
        }
    }
    return index;
}
