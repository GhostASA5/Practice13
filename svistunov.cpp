#include <iostream>
using namespace std;


void readArray(int data[], int size){
    for (int i = 0; i < size; i++){
        cout << data[i] << " ";
    }
}

void readArray(double data[], int size){
    for (int i = 0; i < size; i++){
        cout << data[i] << " ";
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

double arrayMean(int data[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    return sum / size;    
}

double arrayMean(double data[], int size){
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    return sum / size;    
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

int minSumArray(int data[][100], int n, int m, bool row=true){
    int minSum = 100000;
    int minIndex = -1;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += data[i][j];
        }

        if (sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }

    if (!row){
        minSum = 100000;
        for (int j = 0; j < m; j++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += data[i][j];
            }

            if (sum < minSum) {
                minSum = sum;
                minIndex = j;
            }
        }
    }
    return minIndex;
}

int minSumArray(double data[][100], int n, int m, bool row=true){
    double minSum = 100000;
    int minIndex = -1;

    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < m; j++) {
            sum += data[i][j];
        }

        if (sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }

    if (!row){
        minSum = 100000;
        for (int j = 0; j < m; j++) {
            double sum = 0;
            for (int i = 0; i < n; i++) {
                sum += data[i][j];
            }

            if (sum < minSum) {
                minSum = sum;
                minIndex = j;
            }
        }
    }
    return minIndex;
}