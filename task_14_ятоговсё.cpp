#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;
void eraseFromArray(int data[], int& size, int position) {
    // Проверяем, не превышает ли позиция индекса размер массива
    if (position < 0 || position >= size) {
        cout << "Ошибка: неверная позиция" << endl;
        return;
    }

    // Сдвигаем элементы массива влево на одну позицию
    for (int i = position; i < size - 1; ++i) {
        data[i] = data[i + 1];
    }
    
    // Уменьшаем размер массива
    size--;
}

void eraseFromArray(double data[], int& size, int position) {
    // Проверяем, не превышает ли позиция индекса размер массива
    if (position < 0 || position >= size) {
        cout << "Ошибка: неверная позиция" << endl;
        return;
    }

    // Сдвигаем элементы массива влево на одну позицию
    for (int i = position; i < size - 1; ++i) {
        data[i] = data[i + 1];
    }
    
    // Уменьшаем размер массива
    size--;
}
int main() {
    int type;
    cout << "Введите тип вводимых данных (1 - для целых чисел, 2 - для вещественных чисел): ";
    cin >> type;

    int size;
    cout << "Введите количество элементов массива: ";
    cin >> size;

    if (type == 1) {
        int data[100];
        cout << "Введите элементы массива: ";
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }

        int position;
        cout << "Введите индекс позиции, которую надо удалить: ";
        cin >> position;

        eraseFromArray(data, size, position);

        cout << "Массив после удаления: ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
    } else if (type == 2) {
        double data[100];
        cout << "Введите элементы массива: ";
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }

        int position;
        cout << "Введите индекс позиции, которую надо удалить: ";
        cin >> position;

        eraseFromArray(data, size, position);

        cout << "Массив после удаления: ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
    } else {
        cout << "Ошибка: неверный тип данных" << endl;
    }

    return 0;
}

