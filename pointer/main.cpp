#include "func.h"

int main() {
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    int len = sizeof(arr) / sizeof(int);

    bubbleSort(arr, len);

    printArr(arr, len);

    system("pause");

    return 0;
}
