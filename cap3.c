#include <stdio.h>
#include <stdlib.h>

//Exercícios:

// 1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
int atv1()
{
    int x, y, z;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("%d\n", x);
    y = x - 1;
    z = x + 1;
    printf("O antecessor desse número é %d e seu sucessor é %d.", y, z);
    return 0;
}

// 2) Faça um programa que leia um número real e imprima a quinta parte desse número.
int atv2()
{
    float num;
    printf("Digite um número real: ");
    scanf("%f", &num);
    printf("%.3f\n", num);
    return 0;
}
