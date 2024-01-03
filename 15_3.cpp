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
    // Оголошення масиву та змінних
    int array[10];
    setlocale(LC_ALL, "ukr");
    // Запит користувача для введення елементів масиву
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: ", i);
        scanf_s("%d", &array[i]);
    }

    // Обнулення парних елементів
    zeroOutEvenElements(array);

    // Виведення результату
    printf("Масив після обнулення парних елементів:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: %d\n", i, array[i]);
    }

    return 0;
}
