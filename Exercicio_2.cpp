/* Exercicio_2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x raio2)*/

#include "stdio.h"
#include "stdbool.h"
#include "math.h"

int main()
{
    //Variable
    float radius, area;
    char *c;
    bool validation;

    //Code

    validation = false;

    while (validation != true)
    {
        printf("Sistema para calcular a area de uma circunferencia!\n");
        printf("Digite o raio do circulo: ");
        scanf("%f", &radius);
        printf("\n\n");

        if (radius >= 0)
        {
            validation = true;
        }
        else
        {
            printf("Dados invalidos!\n");
            printf("Digite o valor do raio maior ou igual a 0\n");
            validation = false;
        }

        area = radius * pow(3.14, 2);

        printf("\n A area do circulo e: %.2f", area);

    }
    
    scanf("%c", &c);
    return 0;
}
