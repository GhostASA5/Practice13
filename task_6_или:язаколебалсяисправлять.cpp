#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

void reverseArray(int data[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = data[i];
        data[i] = data[size - i - 1];
        data[size - i - 1] = temp;
    }
}

void reverseArray(double data[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        double temp = data[i];
        data[i] = data[size - i - 1];
        data[size - i - 1] = temp;
    }
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

        reverseArray(data, size);

        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    } else if (type == 2) {
        double data[100];
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }

        reverseArray(data, size);

        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    return 0;
}