#include <iostream>
using namespace std;

const int arraySize = 10;

void smallest(int*& a, int& size, int& minValue) {
    if (size <= 0) {
        cout << "Array is empty or invalid size." << endl;
        return;
    }

    // Encontrar el índice del valor más pequeño
    int minIndex = 0;
    minValue = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < minValue) {
            minValue = a[i];
            minIndex = i;
        }
    }

    // Crear un nuevo array con tamaño reducido
    int* newArray = new int[size - 1];
    int newIndex = 0;

    // Copiar elementos al nuevo array, omitiendo el eliminado
    for (int i = 0; i < size; i++) {
        if (i != minIndex) {
            newArray[newIndex++] = a[i];
        }
    }

    // Liberar memoria del array original
    delete[] a;

    // Asignar el nuevo array al puntero del array original
    a = newArray;

    // Reducir el tamaño
    size--;
}

void printArray(const int* a, int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = arraySize;
    int* u = new int[arraySize] { 0, 8, 1, 2, 4, 5, 5, 9, 20, 15 };

    cout << "The original array is:" << endl;
    printArray(u, size);

    int minValue;
    smallest(u, size, minValue);

    cout << "The smallest value is: " << minValue << endl;

    cout << "The array without the smallest value is:" << endl;
    printArray(u, size);

    // Liberar memoria del array dinámico
    delete[] u;

    return 0;
}
