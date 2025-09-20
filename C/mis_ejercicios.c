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


struct Persona {
    char nombre[20];
    int edad;
};


void mi_ejemplo_5() {
    struct Persona p2 = {"Juan", 25};
    struct Persona *ptr2 = &p2;
    printf("Ejemplo 5: %s tiene %d años\n", ptr2->nombre, ptr2->edad);
};


void mi_ejemplo_6() {
    int x = 10;
    int *p = &x;
    int **pp = &p;


    printf("Ejemplo 6: x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
}




void incrementar(int *n) {
    (*n)++;
}


void mi_ejemplo_7() {
    int x = 25;
    incrementar(&x);
    printf("Ejemplo 7: x incrementado = %d\n", x);
}




void mi_ejemplo_8() {
    int *p = (int*)malloc(sizeof(int) * 4);
    if (p != NULL) {
        p[0] = 10; p[1] = 20; p[2] = 30; p[3] = 40;
        printf("Ejemplo 8: %d %d %d %d\n", p[0], p[1], p[2], p[3]);
        free(p);
    }
}




void mi_ejemplo_9() {
    char *nombres[4] = {"Pedro", "Juan", "Carlos", "Lucia"};
    printf("Ejemplo 9: ");
    for (int i = 0; i < 4; i++) {
        printf("%s ", nombres[i]);
    }
    printf("\n");
}


int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
int multiplicacion(int a, int b) { return a * b; }


void mi_ejemplo_10() {
    int (*operacion)(int, int);
   
    operacion = suma;
    printf("Ejemplo 10: Suma = %d\n", operacion(2, 3));
   
    operacion = resta;
    printf("Ejemplo 10: Resta = %d\n", operacion(5, 2));
   
    operacion = multiplicacion;
    printf("Ejemplo 10: Multiplicacion = %d\n", operacion(4, 3));
}




int main() {
    mi_ejemplo_1();
    mi_ejemplo_2();
    mi_ejemplo_3();
    mi_ejemplo_4();
    mi_ejemplo_5();
    mi_ejemplo_6();
    mi_ejemplo_7();
    mi_ejemplo_8();
    mi_ejemplo_9();
    mi_ejemplo_10();
    return 0;
}