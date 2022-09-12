#include <stdio.h>
#include <locale.h> //для поддержки кириллицы

int main(void) {
    setlocale(LC_ALL, "Russian");
    printf("Афанасьева Александра Васильевна, группа ВИ921Б");
    return 0;
}