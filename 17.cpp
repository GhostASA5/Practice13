#include <iostream>
using namespace std;

int minSumArray(int data[][100], int n, int m, bool row=true);

int minSumArray(double data[][100], int n, int m, bool row=true);

int main() {
    int data[3][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Min sum row index: " << minSumArray(data, 3, 3) << std::endl;
    std::cout << "Min sum column index: " << minSumArray(data, 3, 3, false) << std::endl;

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