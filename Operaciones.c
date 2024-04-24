#include <stdio.h>
#define p printf
#define s scanf

int main (void)
{
    int num1,num2,resto;

    p("Ingrese un numero \n");
    s("%d",&num1);
    p("Ingrese otro numero \n");
    s("%d",&num2);

    resto == num1%num2;

    if (num1%num2==0)
        p("La division es exacta\n");
    else
        p("La division no es exacta\n");

    p("%d",resto);

    return 0;
}