// Resolvido usando algoritimo de QuickSort
// https://en.wikipedia.org/wiki/Quicksort

#include <stdio.h>

int partition(double array[], int startIndex, int endIndex) {
    double temp;
    double pivot = array[endIndex];
    int i = startIndex - 1;

    for (int j = startIndex; j < endIndex; j++) {
        if (array[j] > pivot) { // Ordenando do maior para o menor
            // swap
            i++;
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }

    i++;
    temp = array[endIndex];
    array[endIndex] = array[i];
    array[i] = temp;

    return i;
}

void quicksort(double array[], int startIndex, int endIndex) {
    if (startIndex < endIndex) {
        // Coloca o último elemento no lugar correto
        int pivotIndex = partition(array, startIndex, endIndex);

        // Organiza a fracao da array antes do elemento que foi posicionado no 
        // lugar correto, e a posterior
        quicksort(array, startIndex, pivotIndex - 1);
        quicksort(array, pivotIndex + 1, endIndex);
    }   
}

int main() {
    int length;

    printf("\nEntre com a quatidade de valores a serem organizados: ");
    scanf("%d", &length);
    double array[length];

    printf("Digite os valores a serem organizados: ");
    for (size_t i = 0; i < length; i++) {
        scanf("%lf", &array[i]);
    }

    printf("\nArray desorganizada: ");
    for (size_t i = 0; i < length; i++) {
        printf("%.2f ", array[i]);
    }

    quicksort(array, 0, length-1);
    printf("\nArray organizada: ");
    for (size_t i = 0; i < length; i++) {
        printf("%.2f ", array[i]);
    }
}