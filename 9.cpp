#include <iostream>
using namespace std;

double arrayMean(int data[], int size);

double arrayMean(double data[], int size);

int main() {

    int mode;

    cin >> mode;

    if (mode == 1){
        int size;
        cin >> size;
        int data[size];
        for (int i = 0; i < size; i++)
        {
            cin >> data[i]; 
        }
        cout << arrayMean(data, size) << endl;
    } else{
        int size;
        cin >> size;
        double data[size];
        for (int i = 0; i < size; i++)
        {
            cin >> data[i]; 
        }
        cout << arrayMean(data, size) << endl;
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