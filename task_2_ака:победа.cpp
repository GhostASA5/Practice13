#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;



void printArray(const int data[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void printArray(const double data[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << fixed << setprecision(2) << data[i] << " ";
    }
    cout << endl;
}

int main() {
    int type;
    cin >> type;

    int size;
    cin >> size;

    if (type == 1) {
        int data[100];
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }

        printArray(data, size);
    } else if (type == 2) {
        double data[100];
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }

        printArray(data, size);
    }

    return 0;
}