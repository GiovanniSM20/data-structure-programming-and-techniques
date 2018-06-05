# include <stdio.h>
# include <stdlib.h>

typedef int fracao;

struct fracao_tda
{
    int num1;
    int num2;
};

typedef struct fracao_tda fracao_tda;

int main (void)
{
    fracao_tda fracao_um;

    printf ("Informe o primeiro valor: ");
    scanf ("%d", &fracao_um.num1);

    printf ("Informe o segundo valor: ");
    scanf ("%d", &fracao_um.num2);

    fracao fracao_final = fracao_um.num1 / fracao_um.num2;

    printf ("Testando: %d\n", fracao_final);
};
