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

void combineArrays(int data1[], int& size1, int data2[], int size2){
    size1 += size2;
    int newData[size1];
    int sizeFor = size1 - size2;
    for (int i = 0; i < sizeFor; i++)
    {
        newData[i] = data1[i];
    }
    int j = 0;
    for (int i = sizeFor; i < size1; i++)
    {
        newData[i] = data2[j];
        j++;
    }
    for (int i = 0; i < size1; i++)
    {
        cout << newData[i] << " ";
    }
}

void combineArrays(double data1[], int& size1, double data2[], int size2){
    size1 += size2;
    double newData[size1];
    int sizeFor = size1 - size2;
    for (int i = 0; i < sizeFor; i++)
    {
        newData[i] = data1[i];
    }
    int j = 0;
    for (int i = sizeFor; i < size1; i++)
    {
        newData[i] = data2[j];
        j++;
    }
    for (int i = 0; i < size1; i++)
    {
        cout << newData[i] << " ";
    }
    
}