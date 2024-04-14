#include <iostream>
using namespace std;

void insertInArray(int data[], int& size, int position, int num);

void insertInArray(double data[], int& size, int position, int num);

int main() {

    int mode;
    cin >> mode;
    if (mode == 1) {
        int size1;
        cin >> size1;
        int data1[size1];
        for (int i = 0; i < size1; i++)
        {
            cin >> data1[i]; 
        }
        int pos, num;
        cin >> pos >> num;
        insertInArray(data1, size1, pos, num);
    }
}

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
    for (int i = 0; i < size; i++){
        cout <<  dataNew[i] << " ";
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
        cout <<  dataNew[i] << " ";
    }
}