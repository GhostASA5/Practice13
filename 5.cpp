#include <iostream>
using namespace std;

void combineArrays(int data1[], int& size1, int data2[], int size2);

void combineArrays(double data1[], int& size1, double data2[], int size2);

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
        int size2;
        cin >> size2;
        int data2[size2];
        for (int i = 0; i < size2; i++)
        {
            cin >> data2[i]; 
        }
        combineArrays(data1, size1, data2, size2);
    } else {
        int size1;
        cin >> size1;
        double data1[size1];
        for (int i = 0; i < size1; i++)
        {
            cin >> data1[i]; 
        }
        int size2;
        cin >> size2;
        double data2[size2];
        for (int i = 0; i < size2; i++)
        {
            cin >> data2[i]; 
        }
        combineArrays(data1, size1, data2, size2);
    }
}

