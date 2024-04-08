#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;


int arrayMin(const int data[], int size, bool is_first=true) {
    int min_index = 0;
    int min_value = data[0];
    
    for (int i = 1; i < size; ++i) {
        if (data[i] < min_value || (!is_first && data[i] == min_value)) {
            min_index = i;
            min_value = data[i];
        }
    }

    return min_index;
}

int arrayMin(const double data[], int size, bool is_first=true) {
    int min_index = 0;
    double min_value = data[0];
    
    for (int i = 1; i < size; ++i) {
        if (data[i] < min_value || (!is_first && data[i] == min_value)) {
            min_index = i;
            min_value = data[i];
        }
    }

    return min_index;
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

        int min_index_first = arrayMin(data, size, true);
        int min_index_last = arrayMin(data, size, false);
        cout << min_index_first << " " << min_index_last << endl;
    } else if (type == 2) {
        double data[100];
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }

        int min_index_first = arrayMin(data, size, true);
        int min_index_last = arrayMin(data, size, false);
        cout << min_index_first << " " << min_index_last << endl;
    }

    return 0;
}