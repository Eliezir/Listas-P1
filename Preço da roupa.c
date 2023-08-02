/*https://thehuxley.com/problem/4321  */

#include <stdio.h>

int main(){
    double custo, preco, c_tamanho, c_tipo;
    char tamanho, tipo;
    scanf("%lf %c %c", &custo, &tamanho, &tipo);
    if(tamanho == 'P') c_tamanho = 2.75;
    else if(tamanho == 'M') c_tamanho = 3.66;
    else c_tamanho = 5.17;
    if(tipo == 'B') c_tipo = 3.82;
    else if(tipo == 'C') c_tipo = 4.55;
    else c_tipo = 7.12;
    preco = (custo * c_tamanho + custo * c_tipo)/2;
    printf("%.2lf R$\n", preco);
    return(0);
}
