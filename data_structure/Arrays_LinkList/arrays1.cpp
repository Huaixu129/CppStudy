#include <iostream>

using namespace std;

int main() {
    /* ��ʼ������ */
// �洢��ջ��
    int arr[5];
    int nums[5] = { 1, 3, 2, 5, 4 };
// �洢�ڶ��ϣ���Ҫ�ֶ��ͷſռ䣩
    int* arr1 = new int[5];
    int* nums1 = new int[5] { 1, 3, 2, 5, 4 };
    delete[] arr1;
    delete[] nums1;
}