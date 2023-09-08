

/* Abaixo a poluição
https://thehuxley.com/problem/396/code-editor/?quizId=8837 */

/* #include <stdio.h>

int contadorDeMultas(int multas, double valor){
    int carros;
    scanf("%d", &carros);
    if(carros == 999) {
        printf("%.2lf\n%d", valor, multas);
        return 0;
    };
    if(carros > 2){
        multas += 1;
        valor += (carros-2) * 12.89;
    }
    return contadorDeMultas(multas, valor);
}


int main(){

    contadorDeMultas(0,0);
    return 0;
} */

/* 
Descontos Black Friday
https://thehuxley.com/problem/468?quizId=8837 */

/* #include <stdio.h>


int pegaPreco(double precos[], int contador, int blackFriday){
if(contador > 9) return blackFriday;
scanf("%lf", &precos[contador]);
if(contador %2 != 0 && (precos[contador]/ precos[contador-1]) <= 0.8 ) blackFriday +=1;
return pegaPreco(precos, contador + 1, blackFriday);
}

int main(){
    double precos[10];
    printf("%d\n", pegaPreco(precos, 0, 0));
    return 0;
} */


/* 3n +1
https://thehuxley.com/problem/407?quizId=8837 */

/* #include <stdio.h>



int algoritmo(int n, int contador){
    if(n == 1) return contador;
    if(n % 2 == 0) return algoritmo(n/2, contador + 1);
    else return algoritmo(3*n + 1, contador + 1);
}

int fakeFor(int n, int contador, int tamanhoCiclo){
    if(contador > n) return tamanhoCiclo;
    int output = algoritmo(contador, 1);
    return output > tamanhoCiclo ? fakeFor(n, contador + 1, output) : fakeFor(n, contador + 1, tamanhoCiclo);
}

int input(){
    int n1, n2, tamanhoCiclo;
    if(scanf("%d%d", &n1,&n2) == 2){
    tamanhoCiclo= n1 > n2 ? fakeFor(n1, n2, 0) : fakeFor(n2, n1, 0);
    printf("%d %d %d\n", n1, n2, tamanhoCiclo);
    return input();
    }
}

int main(){
    input();
    return 0;
} */


/* Árvore de Natal
https://thehuxley.com/problem/490?quizId=8837 */

/* #include <stdio.h>


int main(){
    double arvore,ornamentos[6], precoTotal = 0;
    scanf("%lf", &arvore);
    scanf("%lf%lf%lf%lf%lf%lf", &ornamentos[0], &ornamentos[1], &ornamentos[2], &ornamentos[3], &ornamentos[4], &ornamentos[5]);
    precoTotal = arvore + ornamentos[0]*ornamentos[1] + ornamentos[2]*ornamentos[3] + ornamentos[4]*ornamentos[5];
    printf("%.2lf\n%.2lf\n", precoTotal, precoTotal/21.0);

} */


// Foto de Família
// https://thehuxley.com/problem/50?quizId=8837

/* #include <stdio.h>

int print(double ordem[], int contador){
    printf("%.2lf\n", ordem[contador]);
    if(contador < 3) 
        return print(ordem, contador +1);
}

int ordenar(double alturas[], double ordem[], int index)
{
    int contador = 0;
    if (alturas[index] >= alturas[0] && index != 0)
        contador++;
    if (alturas[index] >= alturas[1] && index != 1)
        contador++;
    if (alturas[index] >= alturas[2] && index != 2)
        contador++;
    if (alturas[index] >= alturas[3] && index != 3)
        contador++;
    switch (contador)
    {
    case 0:
        ordem[0] = alturas[index];
        break;
    case 1:
        if(ordem[3] == -1)ordem[3] = alturas[index];
        else ordem[0] = alturas[index];
        break;
    case 2:
        if (ordem[1] == -1)ordem[1] = alturas[index];
        else if (ordem[3] == -1) ordem[3] = alturas[index]; 
        else ordem[0] = alturas[index];
        break;
    case 3:
        if(ordem[2] == -1) ordem[2] = alturas[index];
        else if (ordem[1] == -1)ordem[1] = alturas[index];
        else if (ordem[3] == -1) ordem[3] = alturas[index]; 
        else ordem[0] = alturas[index];
        break;
    }
    if(index == 3){
        print(ordem, 0);
    }
}


int main()
{
    double alturas[4], ordem[4] = {-1, -1, -1, -1};
    scanf("%lf %lf %lf %lf", &alturas[0], &alturas[1], &alturas[2], &alturas[3]);
    ordenar(alturas, ordem, 0);
    ordenar(alturas, ordem, 1);
    ordenar(alturas, ordem, 2);
    ordenar(alturas, ordem, 3);
    return 0;
} */


// Conta Múltiplos
// https://thehuxley.com/problem/398?quizId=8837

/* #include <stdio.h>
int ehMultiplo(int n1, int n2, int contador){
    if(n1 * contador % n2 == 0){
        return (49/(n1*contador)) > 0 ? (49/(n1*contador)) : (49/(n1*contador)) * -1;
    } 
    if(n1 * (contador + 1) < 50) return ehMultiplo(n1, n2, contador + 1);
    return 0;
}


int main(){
    int n1, n2, contador;
    scanf("%d%d", &n1, &n2);
    contador = ehMultiplo(
        n1 <= n2 ? n1 : n2,
        n1 > n2 ? n1 : n2,
        1
    );
    printf("%d\n", contador);
} */



// Desafio do maior número
// https://thehuxley.com/problem/224?quizId=8837

/* #include <stdio.h>

int contador(int maior){
    int num;
    scanf("%d", &num);
    if(num == 0 ) return maior;
    else return contador(num > maior ? num : maior);
}

int main(){
printf("%d\n", contador(0));
} */


// Elevador
// https://thehuxley.com/problem/180?quizId=8837

/* #include <stdio.h>
int elevador(int contador, int capacidade, int pessoas, int excedeu){
int entrada, saida;
scanf("%d%d", &saida,  &entrada);
pessoas += entrada - saida;
if(pessoas > capacidade) excedeu =  1;
if(contador > 1) return elevador(contador -1, capacidade, pessoas, excedeu);
return excedeu;
}


int main(){
int leituras, capacidade, excedida;
scanf("%d%d", &leituras, &capacidade);
excedida = elevador(leituras, capacidade, 0, 0 );
excedida == 1 ? printf("S\n") : printf("N\n");
} */