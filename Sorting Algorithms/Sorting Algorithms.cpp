#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::swap;

/*  ======================================================================
    Auxiliary functions for initialization, copying and displaying the table
    ======================================================================
*/
void copyArray(int* array, int* newArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
}

void printArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void initArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        //Generates random values
        array[i] = rand() % 5000;
    }
}




void insertionSort(int* array, int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        //storing an array element in an auxiliary variable
        temp = array[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < array[j])
                array[j + 1] = array[j];
            else
                break;
        }
        array[j + 1] = temp;
    }

}

void selectionSort(int* array, int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        swap(array[i], array[min]);
    }
}

void bubbleSort(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = size; j < 0; j--)
        {
            if (array[j] < array[j - 1])
                swap(array[j], array[j - 1]);
        }
    }
}

void quickSort(int* array, int left, int right)
{
    if (right <= left) return;

    int i = left - 1, j = right + 1,
        pivot = array[(left + right) / 2]; //wybieramy punkt odniesienia

    while (1)
    {
        while (pivot > array[++i]);
        while (pivot < array[--j]);

        /*
        If the counters didn't cross, replace the elements with each other
        on the wrong side of the pivot element
        */
        if (i <= j)
            swap(array[i], array[j]);
        else
            break;
    }

    if (j > left)
        quickSort(array, left, j);
    if (i < right)
        quickSort(array, i, right);
}

int main()
{
    double result_time;
    clock_t start, end;
    int n = 100000;
    srand(time(NULL));
    int* S1 = new int[n];
    int* S2 = new int[n];
    int* S3 = new int[n];
    int* S4 = new int[n];
    int* S5 = new int[n];

    initArray(S1, n);
    copyArray(S1, S2, n);
    copyArray(S1, S3, n);
    copyArray(S1, S4, n);
    copyArray(S1, S5, n);

    cout << "Selection Sort: ";
    start = clock();
    selectionSort(S1, n);
    end = clock();
    result_time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time : " << result_time << endl;

    cout << "Insertion Sort: ";
    start = clock();
    insertionSort(S2, n);
    end = clock();
    result_time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time : " << result_time << endl;

    cout << "Bubble Sort: ";
    start = clock();
    insertionSort(S3, n);
    end = clock();
    result_time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time : " << result_time << endl;

    cout << "Quicksort: ";
    start = clock();
    quickSort(S4, 0, n - 1);
    end = clock();
    result_time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time : " << result_time << endl;

    delete[] S1;
    delete[] S2;
    delete[] S3;
    delete[] S4;
    delete[] S5;
    return 0;
}
