/* 1º
Contando os Dígitos Pares
https://thehuxley.com/problem/405?quizId=8835 */
#include <stdio.h>
int ehPar(int x, int contador, int pares){
    if(x < contador){
        return pares;
    }
    else{
        if((x/contador) % 2 == 0) pares +=1;
        return ehPar(x, contador*=10, pares);
    }
}
int main(){
int num;
scanf("%d", &num);
printf("%d\n", ehPar(num, 1, 0));
return 0;
}

/* 2º
Algoritmo de Euclides
https://thehuxley.com/problem/552?quizId=8835 */
#include <stdio.h>

int mdc(int num1, int num2){
    int menor = num2, maior = num1;
    if(num2 > num1){
        menor = num1;
        maior = num2;
    }
    if(maior%menor == 0){
        return menor;
    }
    else{
        int R = maior%menor;
        return mdc(menor, R);   
    }
}

int repeticao(int vezes){
    if(vezes > 0 ){
        int num1,num2, output;
           scanf("%d %d", &num1, &num2);
            output = mdc(num1,num2);
            printf("MDC(%d,%d) = %d\n",num1,num2,output);
            repeticao(vezes -1);
    }
    else return 0;
}

int main(){
    int  vezes;
    scanf("%d", &vezes);
    repeticao(vezes);
    return 0;
}

/* 3º
Fatorial simples
https://thehuxley.com/problem/4019?quizId=8835 */
#include <stdio.h>

int fat(int x){
    if(x == 0){
        return 1;
    }
    else{
        return x*fat(x-1);
    }
}

int main(){
int num, output;
scanf("%d", &num);
output = fat(num);
printf("%d", output);

}

/* 4º
Fatorial
https://thehuxley.com/problem/24?quizId=8835 */
#include <stdio.h>
int fat(int x){
    if(x == 0) return 1;
    else return x*fat(x-1);
}

int repeticao(){
    int num;
    scanf("%d", &num);
    if(num == -1){
        return 0;
    }
    else{
         printf("%d\n",fat(num));
         return repeticao();
    }

}


int main(){
    repeticao();
    return 0;
}

/* 5º
Calcular MDC de forma recursiva
https://thehuxley.com/problem/352?quizId=8835 */

#include <stdio.h>

int mdc(int num1, int num2){
    int menor = num2, maior = num1;
    if(num2 > num1){
        menor = num1;
        maior = num2;
    }
    if(maior%menor == 0){
        return menor;
    }
    else{
        int R = maior%menor;
        return mdc(menor, R);   
    }
}

int main(){
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", mdc(n1,n2));
    return(0);
}

/* 6º
É um número primo? (versão iniciante)
https://thehuxley.com/problem/972?quizId=8835 */
#include <stdio.h>


int ehPrimo(int x, int contador){
    if(x == contador){
        return 1;
    }
    else if(x % contador == 0 || x < 2){
        return 0;
    }
    else{
        if(contador == 2) contador -=1;
        return(ehPrimo(x, contador+2));
    }
    
}

int repeticao(){
    int num;
    scanf("%d", &num);
    if(num == -1){
        return 0;
    }
    else{
         printf("%d\n",ehPrimo(num, 2));
         return repeticao();
    }

}

int main(){
    repeticao();
    return 0;
}

/* 7º
L5Q2 - Rickception
https://thehuxley.com/problem/1290?quizId=8835 */
#include <stdio.h>


int viagem(int n1, int n2, int contador){
    if(n2 <= contador) return(n1);
    else{
        if(contador %2 == 0){
        return viagem(n1+3, n2, contador +1);
        }
        else {
        return viagem(n1 + n1%5, n2, contador +1);
        }
    }
}


int main(){
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", viagem(n1,n2, 0));
    return 0;
}

