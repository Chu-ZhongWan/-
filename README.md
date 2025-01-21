冒泡算法
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
    for (int i = begin + 1; i < end - 1; i++) {
        for (int j = i + 1; j < end; j++) {
            // 比较相邻元素，如果前面元素比后面元素大则交换
            if (arr[i] > arr[j]) {
                Swap(arr, i, j);
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble_Sort(arr, 0, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
