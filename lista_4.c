/* 1º
Múltiplos de N num Intervalo
https://thehuxley.com/problem/713?quizId=8836
 */

/* #include <stdio.h>

int ehMultiplo(int n1, int n2, int n3, int cont)
{
    int mult = n1 * cont;
    if (mult > n3)
    {
        if(cont == 1){
            printf("INEXISTENTE\n");
        }
        return 0;
    }
    else
    {
        if (mult >= n2 && mult <= n3)
        {
            printf("%d\n", mult);
        }
        return ehMultiplo(n1, n2, n3, cont +1);
    }
}

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    ehMultiplo(n1, n2, n3, 1);
} */

/* 2º
É um número triangular?
https://thehuxley.com/problem/2077?quizId=8836 */

/* #include <stdio.h>

int ehTriangular(int num, int contador){
    int triangulo = contador * (contador + 1) * (contador + 2);
    if(num <= 0 || triangulo > num){
        printf("FALSO\n");
    }
    else if(triangulo == num){
        printf("%d * %d * %d = %d\n", contador, contador + 1, contador + 2, num);
        printf("VERDADEIRO\n");
    }
    else{
        return ehTriangular(num, contador + 1);
    }
}

int main(){
int num;
scanf("%d", &num);
ehTriangular(num, 1);
} */

/* 3º
Programador Dedicado
https://thehuxley.com/problem/1109?quizId=8836 */

// #include <stdio.h>

// int daily(int programas, int linhas, int mais_linhas, int dia, int melhor_dia)
// {
//     if (dia > 7)
//     {
//         char *dia_semana;
//         /* char* dias[7][7] = {"DOMINGO", "SEGUNDA", "TERCA", "QUARTA", "QUINTA", "SEXTA", "SABADO"}; */

//         switch (melhor_dia)
//         {
//         case 1:
//             dia_semana = "DOMINGO";
//             break;
//         case 2:
//             dia_semana = "SEGUNDA";
//             break;
//         case 3:
//             dia_semana = "TERCA";
//             break;
//         case 4:
//             dia_semana = "QUARTA";
//             break;
//         case 5:
//             dia_semana = "QUINTA";
//             break;
//         case 6:
//             dia_semana = "SEXTA";
//             break;
//         case 7:
//             dia_semana = "SABADO";
//             break;
//         }

//         printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", programas);
//         printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", linhas);
//         printf("DIA QUE MAIS PRODUZIU: %s\n", dia_semana);
//         /* printf("DIA QUE MAIS PRODUZIU:  %s\n", dias[melhor_dia-1]); */
//         return 0;
//     }
//     int p, l;
//     scanf("%d %d", &p, &l);
//     if (p > 4)
//         programas++;
//     if (l > 99)
//         linhas++;
//     if (l >= mais_linhas){
//         melhor_dia = dia;
//         mais_linhas = l;
//     }

//     return daily(programas, linhas, mais_linhas, dia + 1, melhor_dia);
// }

// int main()
// {
//     daily(0, 0, 0, 1, 1);
//     return 0;
// }

/* 4º
Divisível por 3
https://thehuxley.com/problem/342?quizId=8836 */

/* #include <stdio.h>

int ehDivisivel(int num, int contador, int divi, int ehPar){
    if( num < contador){
        if(divi != 0) printf("%d\n", divi);
        else printf("O numero nao possui divisores multiplos de 3!\n");
        return 0;
    }
    else{
        if(num % contador == 0 && contador % 3 == 0) divi += 1;
        ehDivisivel(num, contador + ehPar, divi, ehPar);
    }
}

int main(){
    int num, ehPar, contador;
    scanf("%d",&num);
    ehPar = num % 2 == 0 ? 1 : 2;
    contador = ehPar == 1 ? 2 : 3;
    ehDivisivel(num, contador, 0, ehPar );
} */

/* 5º
Série com funções
https://thehuxley.com/problem/2046?quizId=8836 */

/* #include <stdio.h>

double fatorial(double num){
  if(num == 0){
    return 1;
  }
  else{
    return num*fatorial(num-1);
  }

}

int ehPrimo(int x, int contador){
    if(x == contador){
        return x;
    }
    else if(x % contador == 0 || x < 2){
        if(x % 2 == 0) return ehPrimo(x + 1, 2);
        else return ehPrimo(x + 2, 2);
    }
    else{
        if(contador == 2) contador -=1;
        return(ehPrimo(x, contador+2));
    }

}

int repeticao(int num, double output, double contador){
    double divisor = contador > 1 ? ehPrimo(contador,2) : 1;
  if(contador > num){
    printf("\n%.2lf\n", output);
    return output;
  }
  else{
    printf("%0.lf!/%0.lf", contador, divisor);
    if(contador != num ){
      printf(" + ");
    }
    output += fatorial(contador)/divisor;
    repeticao(num, output, contador + 1);
  }
}

int main(void) {
  int contador;
  scanf("%d",&contador);
  if(contador == 0){
    printf("0.00");
    return 0;
  }
  repeticao(contador,0,1);
  return 0;
} */

/* 6º
A muralha infinita
https://thehuxley.com/problem/2072?quizId=8836 */

/* #include <stdio.h>


int muralha(int x, int y,int lado ,int moedas, int dias){
    if(dias < 1) {
        return moedas;
        }
    else{
        char movimento;
        scanf(" %c", &movimento);
      if(x == y){
            if(lado == 1 && movimento == 'D' && y != 0){
                moedas +=1;
                lado = 0;
            }
            else if(movimento == 'C' && lado == 0){
                lado = 1;
                if(y != 0)  {
                    moedas +=1;
                    };
            }
      }
        switch (movimento){
            case 'C':
                return muralha(x, y +1, lado, moedas, dias - 1);
                break;
            case 'D':
                return muralha(x +1, y, lado, moedas, dias - 1);
                break;
        }
    }

}


int main(){
    int dias, moedas;
    scanf("%d", &dias);
    moedas = muralha(0, 0, 0, 0 , dias);
    printf("%d", moedas);
} */

/* 7º
Cápsulas de Café
https://thehuxley.com/problem/492?quizId=8836 */

/* #include <stdio.h>
int doacoes(int total, int professor){
    if(professor == 0){
        return total;
    }
    else{
        int variavel = 10, quantidade;
        char tamanho;
        scanf(" %d %c", &quantidade, &tamanho);
        if(tamanho == 'G' || tamanho == 'g') variavel = 16;
        return doacoes(total + (quantidade * variavel), professor - 1);
    }

}

int main(){
int capsulas;
capsulas = doacoes(0, 7);
printf("%d\n", capsulas);
printf("%d\n", capsulas*2/7);
} */
