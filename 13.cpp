#include <iostream>
using namespace std;

void insertInArray(int data[], int& size, int position, int num);

void insertInArray(double data[], int& size, int position, int num);

void insertInArray(int data[], int& size, int position, int num){
    size += 1;
    int dataNew[size];
    for (int i = 0; i < position; i++) {
        dataNew[i] = data[i];
    }
    dataNew[position] = num;
    for (int i = position + 1; i < size; i++) {
        dataNew[i] = data[i-1];
    }
    for (int i = 0; i < size; i++)

    {
        cout <<  dataNew[i] << endl;
    }
}

void insertInArray(double data[], int& size, int position, int num){
    size += 1;
    double dataNew[size];
    for (int i = 0; i < position; i++) {
        dataNew[i] = data[i];
    }
    dataNew[position] = num;
    for (int i = position + 1; i < size; i++) {
        dataNew[i] = data[i-1];
    }
    for (int i = 0; i < size; i++)

    {
        cout <<  dataNew[i] << endl;
    }
}