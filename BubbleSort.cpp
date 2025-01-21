#include <iostream>
using namespace std;

// 交换函数，使用异或操作交换数组元素
void Swap(int arr[], int i, int j) {
    if (i!= j) {
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];
    }
}

// 冒泡排序函数
void Bubble_Sort(int arr[], int begin, int end) {
    bool swapped;
    for (int i = begin + 1; i < end - 1; i++) {
        swapped = false;
        for (int j = i + 1; j < end; j++) {
            if (arr[i] > arr[j]) {
                Swap(arr, i, j);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

// 打印数组元素的函数
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    Bubble_Sort(arr, 0, n);
    printArray(arr, n);
    return 0;
}
