#include <stdio.h>
#include <locale.h>
void zeroOutEvenElements(int arr[]) {
    for (int i = 0; i < 10; ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    // ���������� ������ �� ������
    int array[10];
    setlocale(LC_ALL, "ukr");
    // ����� ����������� ��� �������� �������� ������
    printf("������ �������� ������:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: ", i);
        scanf_s("%d", &array[i]);
    }

    // ��������� ������ ��������
    zeroOutEvenElements(array);

    // ��������� ����������
    printf("����� ���� ��������� ������ ��������:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: %d\n", i, array[i]);
    }

    return 0;
}
