#include <stdio.h>

int print(int array[], int limite, int contador)
{
    printf("%d ", array[contador]);
    if (limite == contador + 1)
        return 0;
    return print(array, limite, contador + 1);
}

int bubbleSort(int array[], int contador, int posMaior, int limite, int tamanho)
{
    if (array[contador] > array[contador + 1])
    {
        int aux = array[contador + 1];
        array[contador + 1] = array[contador];
        array[contador] = aux;
    }

    if (array[contador] >= array[posMaior])
        posMaior = contador + 1;

    if (posMaior == limite - 1)
    {
        limite -= 1;
        posMaior = 0;
    }

    if (limite == 1)
        return print(array, tamanho, 0);

    contador + 1 == limite ? bubbleSort(array, 0, posMaior, limite, tamanho) : bubbleSort(array, contador + 1, posMaior, limite, tamanho);
}

int input(int array[], int contador)
{
    int num;
    scanf("%d", &num);
    if (num == -1)
    {
        print(array, contador, 0);
        printf("-> ");
        return bubbleSort(array, 0, 0, contador, contador);
    }
    array[contador] = num;
    return input(array, contador + 1);
}

int main()
{
    int array[100];
    input(array, 0);
    return 0;
}