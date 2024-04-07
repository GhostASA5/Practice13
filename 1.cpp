#include <iostream>
using namespace std;

void readArray(int data[], int size);

void readArray(double data[], int size);

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
        readArray(data, size);
    } else{
        int size;
        cin >> size;
        double data[size];
        for (int i = 0; i < size; i++)
        {
            cin >> data[i]; 
        }
        readArray(data, size);
    }
    

}

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
