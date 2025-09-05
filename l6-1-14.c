#include <stdio.h>

int main() {
    int age, last_two, last_digit;
    scanf("%d", &age);
    
    last_two = age % 100; // Сохраняем последние две цифры в ОТДЕЛЬНУЮ переменную
    
    switch (last_two / 10) {
        case 1:
            printf("Мне %d лет", age); // Выводим ИСХОДНЫЙ возраст
            break;
        default:
            last_digit = last_two % 10;
            switch (last_digit) {
                case 1:
                    printf("Мне %d год", age); // Выводим ИСХОДНЫЙ возраст
                    break;
                case 2:
                case 3:
                case 4:
                    printf("Мне %d года", age); // Выводим ИСХОДНЫЙ возраст
                    break;
                default:
                    printf("Мне %d лет", age); // Выводим ИСХОДНЫЙ возраст
                    break;
            }
    }
    return 0;
}