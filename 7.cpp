#include <iostream>

using namespace std;

int arraySum (int[], int);
double arraySum (double[], int);

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
