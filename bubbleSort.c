#include <stdio.h>


int print(int array[], int limite, int contador){
    printf("%d ", array[contador]);
    if(limite == contador +1) return 0;
    return print(array, limite, contador +1);
}

int bubbleSort(int array[], int contador, int posMaior, int limite){ 

    if(array[contador] > array[contador + 1])
    {
        int aux = array[contador + 1];
        if(array[contador] >= array[posMaior]) posMaior = contador +1;
        array[contador + 1] = array[contador];
        array[contador] = aux;
    }
    if(posMaior == limite -1)
    {
        limite -=1;
        posMaior = 0;
    }

    if(limite == 1) return print(array, 7, 0);
    
    contador + 1 == limite ? 
        bubbleSort(array, 0, posMaior, limite) : bubbleSort(array, contador + 1, posMaior, limite);
        
}

int main(){
    int array[7] = {8, 2 , 4 ,5, 7 , 8, 1};
    print(array, 7, 0);
    printf("-> ");
    bubbleSort(array, 0, 0,7);
    return 0;
}