#include <stdio.h>
#include <stdlib.h>

int main()
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
