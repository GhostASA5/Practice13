#include <iostream>

using namespace std;

int arrayMax(int[], int, bool);
int arrayMax(double[], int, bool);

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
