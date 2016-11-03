#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b);

int main()
{
    printf("Le resultat de l'addition est: %d\n", addition(1,4));
    return 0;
}

int addition(int a, int b)
{
    return a+b;
}
