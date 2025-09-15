#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mi_ejemplo_1(){
    int num1 = 3;
    int *p = &num1;
    printf("Ejemplo 1: num = %d, puntero = %d\n", num1, *p);
}

void mi_ejemplo_2(){
    int num2 = 30;
    int *p = &num2;
    *p = 40;
    printf("Ejemplo 2: num = %d, la posición final = %d\n", num2, *p);
}

void mi_ejemplo_3(){
    int array[5] = {1, 4, 6, 7, 8};
    int *p = array;
    *p = array[4];
    printf("Ejemplo 3: la posición 4 del array = %d\n", *p);
}

void mi_ejemplo_4(){
    int array[7] = {2, 48, 78, 4, 5, 7, 7};
    int *p = array;
    printf("Ejemplo 4: recorrer lista: ");
    for(int i = 0; i < 7; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main() {
    mi_ejemplo_1();
    mi_ejemplo_2();
    mi_ejemplo_3();
    mi_ejemplo_4();
    return 0;
}