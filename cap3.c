#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.141592;

//Exercícios:

//  1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
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

//  2) Faça um programa que leia um número real e imprima a quinta parte desse número.
int atv2()
{
    float num;
    printf("Digite um número real: ");
    scanf("%f", &num);
    printf("%.3f\n", num);
    return 0;
}

//  3) Faça um programa que leia três valores inteiros e mostre sua soma.
int atv3()
{
    printf("Digite três valores inteiros: ");
    int x, y, z, soma;
    scanf("%d%d%d", &x, &y, &z);
    soma = x + y + z;
    printf("A soma dos valores é: %d", soma);
    return 0;
}

//  4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
int atv4()
{
    printf("Digite quatro números do tipo float: ");
    float a, b, c, d, media;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    media = (a + b + c + d) / 4;
    printf("A média dos números digitados é %f", media);
    return 0;
}

//  5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
int atv5()
{
    printf("Digite o ano atual: ");
    int ano, idade, nasc;
    scanf("%d", &ano);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    nasc = ano - idade;
    printf("Você nasceu no ano: %d", nasc);
    return 0;
}

/*  6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
    A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.*/
int atv6()
{
    printf("Digite uma velocidade em km/h: ");
    float km, ms;
    scanf("%f", &km);
    ms = km/3.6;
    printf("A velocidade convertida em m/s é %.2f", ms);
    return 0;
}

// 7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
int atv7()
{
    printf("Digite um valor em R$: ");
    float valor, cotacao, dolares;
    scanf("%f", &valor);
    printf("Digite a cotação do dólar em R$: ");
    scanf("%f", &cotacao);
    dolares = valor / cotacao;
    printf("O valor convertido em dólares é %.2f", dolares);
    return 0;
}

/* 8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
int atv8()
{
    printf("Digite uma temperatura em graus Celsius: ");
    float tempC, tempF;
    scanf("%f", &tempC);
    tempF = tempC * (9.0/5.0) + 32.0;
    printf("A temperatura em graus Fahrenheit é: %.2f", tempF);
    return 0;
}

/*  9) Leia um ângulo em graus e apresente-o convertido em radianos.
    A fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.*/
int atv9()
{
    printf("Digite um ângulo em graus: ");
    float angulo, radiano;
    scanf("%f", &angulo);
    radiano = angulo * PI/180;
    printf("O ângulo convertido em radianos é: %f", radiano);
    return 0;
}

/*  10) A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
        i. O primeiro ganhador receberá 46% do total.
        ii. O segundo receberá 32% do total.
        iii. O terceiro receberá o restante.
    Calcule e imprima a quantia recebida por cada um dos ganhadores.*/
int atv10()
{
    printf("Premiação do sorteio\n");
    double premio1, premio2, premio3, premiacao = 780000.00;
    premio1 = premiacao * 0.46;
    premio2 = premiacao * 0.32;
    premio3 = premiacao - (premio1 + premio2);
    printf("Os prêmios serão distribuídos da seguinte forma:\n\tPrimeiro ganhador: \t%.2f\n\t"
           "Segundo ganhador: \t%.2f\n\tTerceiro ganhador: \t%.2f.\n\tTotal da Premiação:\t%.2f",
           premio1, premio2, premio3, premiacao);
    return 0;
}

/*  11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
    A área do círculo é A = π* raio2, sendo π = 3.141592.*/
int atv11()
{
    printf("Digite o valor do raio de um círculo: ");
    float raio, area;
    scanf("%f", &raio);
    area = PI * (raio * raio);
    printf("A área da circuferência é %.2f", area);
}


/*  12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
    O volume de um cilindro circular é calculado por meio da seguinte fórmula:
    Imagem no material: em que π = 3.141592*/
int atv12()
{
    printf("Digite o raio do cilindro: ");
    float raio, altura, volume;
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    volume = PI * raio * raio * altura;
    printf("O volume do cilindro é %.2f", volume);
}

/*  13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
    Imagem no material: Faça um programa que leia os valores de a e b, e calcule o valor da
    hipotenusa através da fórmula dada. Imprima o resultado.*/

int atv13()
{
    printf("Programa para calcular o valor da hipotenusa de um triângulo!\n");
    printf("-------------------------------------------------------------\n");
    double cat1, cat2, hipot;
    printf("Digite o valor do primeito cateto: ");
    scanf("%lf", &cat1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%lf", &cat2);
    hipot = sqrt((cat1*cat1) + (cat2*cat2));
    printf("A hipotenusa do triângulo é: %.2lf", hipot);
}

//  14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
int atv14()
{
    printf("Digite uma letra maiuscula: ");
    char letMan, letMin;
    scanf("%c", &letMan);
    letMin = letMan + 32;
    printf("A letra %c em minúsculo é %c", letMan, letMin);
}

/*  15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre
    o número formado pelos dígitos invertidos do número lido. Exemplo:
    Número lido = 123 Número gerado = 321*/


/*  16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois
    (utilize os operadores de deslocamento de bits).*/


//  17) Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.


/*  18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do
    primeiro número pelo segundo.*/


/*  19) Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”,
    “ou bit a bit” e “e bit a bit” entre eles.*/
