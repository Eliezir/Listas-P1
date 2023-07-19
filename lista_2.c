// 1º
// Mercearia do Ambrósio
// https://thehuxley.com/problem/51?quizId=8833

//  #include <stdio.h>
//  int main(){
//      int code, quantity;
//     double prices[] = {5.30,6.00,3.20,2.50}, totalPrice;
//      scanf("%d %d", &code, &quantity);
//      totalPrice = prices[code-1]*quantity;
//      if(totalPrice >= 40 || quantity >= 15 ){
//          totalPrice *= 0.85;
//      };
//      printf("R$ %.2lf\n", totalPrice);
//  }

// 2º
// Menor de 3
// https://thehuxley.com/problem/18?quizId=8833
// #include <stdio.h>
// int main(){
//     int num1,num2,num3, output;
//     scanf("%d %d %d", &num1, &num2, &num3);
//     if(num1 <= num2 && num1 <= num3){
//         output = num1;
//     }
//     else if(num2 <= num1 && num2 <= num3){
//         output = num2;
//     }
//     else{
//         output = num3;
//         }

//     printf("%d\n", output);

// }

// 3º
// Situação de um aluno.
// https://thehuxley.com/problem/1078?quizId=8833

// #include <stdio.h>
// int main(){
//     double num1,num2,num3,media;
//     scanf("%lf %lf %lf", &num1, &num2 , &num3);
//     media = (num1 + num2 + num3 )/ 3;
//     if(media >= 70 && media <=100){
//      printf("A media do aluno foi %.2lf e ele foi APROVADO\n", media);
//     }
//     else if(media >= 0 && media <= 40){
//   printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
//     }
//     else if(media > 40 && media < 70){
//     printf("A media do aluno foi %.2lf e ele foi FINAL\n", media);
//     }
//     else{
//           printf("Media invalida\n");
//     };

//     return(0);
// }

// 4º
// Choque Elétrico
// https://thehuxley.com/problem/1169?quizId=8833

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int potencia;
//     double level;
//     scanf("%lf",&level);
//     if(level >= 1 && level <= 20) potencia = 20 + pow(level, 3);
//     else if(21 <= level && level <= 40)  potencia = 8000 + pow((level -10),2);
//     else if(level >= 41 && level <=60)  potencia = 9000 + 5*level;
//     else if (level >= 61 && level <=80)  potencia = 9300 + 2*level;
//     else {potencia = 9500 + level;}
//     printf("Potencia de : %d W\n", potencia);
//     return(0);
// }

// 5º
// Critério do Seguro
// https://www.thehuxley.com/problem/511?quizId=8833

// #include <stdio.h>

// int main(){
//     int num1,num2,preco = 0;
//     scanf("%d %d", &num1,&num2);
//     if(num1 == 0 && num2 == 1){
//         preco = 1;
//     }
//     printf("%d\n", preco);
//     return(0);
// }

// 6º
// Conceito MEC
// https://www.thehuxley.com/problem/376?quizId=8833
// #include <stdio.h>
// int main(){
//     int alunos,livros;
//     char conceito;
//     scanf("%d %d", &livros, &alunos);
//        double livros_alunos = alunos/livros;
//        if(livros_alunos <= 8) conceito = 'A';
//        else if(livros_alunos <= 12) conceito = 'B';
//        else if(livros_alunos <= 18) conceito = 'C';
//        else if(livros_alunos > 18) conceito = 'D';
//        printf("%c\n", conceito);
//     return(0);
// }

// 7º
// Comparador de Números Inteiros
// https://www.thehuxley.com/problem/509?quizId=8833

// #include <stdio.h>

// int main(){
//     int num1, num2;
//     scanf("%d %d", &num1, &num2);
//     if(num1 > num2) printf("1\n");
//     else printf("0\n");

//     if(num1 == num2) printf("1\n");
//     else printf("0\n");

//     if(num1 <  num2) printf("1\n");
//     else printf("0\n");

//     if(num1 !=  num2) printf("1\n");
//     else printf("0\n");

//     if(num1 >=  num2) printf("1\n");
//     else printf("0\n");

//     if(num1 <=  num2) printf("1\n");
//     else printf("0\n");

//     return(0);
// }

// 8º
// Classificação de Triângulos
// https://www.thehuxley.com/problem/49?quizId=8833

// #include <stdio.h>
// int main(){
//     int num1,num2,num3;
//     scanf("%d %d %d", &num1, &num2, &num3);
//     if(num1 == num2 && num1 == num3) printf("equilatero\n");
//     else if(num1 == num2 || num1 == num3 || num2 == num3) printf("isosceles\n");
//     else printf("escaleno\n");
//     return(0);
// }

// º9
// Chance de Aprovação
// https://www.thehuxley.com/problem/1123?quizId=8833

// #include <stdio.h>
// int main(){
//     double questions, answers, result;
//     scanf("%lf %lf", &questions, &answers);
//     result = answers/(questions/100);
//     if(result < 20)printf("%.2lf%% 4.40%% Pessimo\n", result);
//     else if(result < 40)printf("%.2lf%% 31.65%% Ruim\n", result);
//     else if(result < 60)printf("%.2lf%% 56.82%% Bom\n", result);
//     else if(result < 80)printf("%.2lf%% 80.00%% Muito Bom\n", result);
//     else if(result < 100)printf("%.2lf%% 94.00%% Excelente\n", result);
//     return(0);
// }

// 10º
// Andando no tempo
// https://www.thehuxley.com/problem/986?quizId=8833

// #include <stdio.h>
// int main(){
//     int num1 , num2, num3;
//     scanf("%d %d %d", &num1,&num2,&num3);
//     if(num1 == num2 || num1 == num3 || num2 == num3) printf("S\n");
//     else if(num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1) printf("S\n");
//     else printf("N\n");
//     return(0);
// }

// 11º
// Análise de Crédito
// https://www.thehuxley.com/problem/1121?quizId=8833

/* #include <stdio.h>
int main(){
    double salario, contas, parcela;
    scanf("%lf %lf", &salario, &contas);
    parcela = salario * .3 - contas;
    if(parcela < 0) parcela = 0;
    printf("%.2lf\n", parcela);

} */

// 12º
// 2 números em ordem crescente
// https://www.thehuxley.com/problem/691?quizId=8833

// #include <stdio.h>
// int main(){
//     int num1,num2;
//     scanf("%d %d", &num1, &num2);
//     if(num1 < num2) printf("%d %d\n", num1,num2);
//     else printf("%d %d\n", num2, num1);
// }

// 13º
// Aumento dos Trabalhadores
// https://thehuxley.com/problem/368?quizId=8833

/* #include <stdio.h>

int main()
{
  double sal;
  scanf("%lf", &sal);
  if (sal > 500)
    sal *= 1.1;
  else if (sal > 300)
    sal *= 1.07;
  else
    sal *= 1.05;
  printf("%.2lf\n", sal);
} */

/* 14º
Conta de Água
https://thehuxley.com/problem/174?quizId=8833 */

/* #include <stdio.h>
int main(){
  int consumo, preco = 7;
  scanf("%d", &consumo);
  if(consumo > 100) {
    preco += (consumo - 100) * 5;
    consumo -= consumo - 100;
  }
   if(consumo > 30){
    preco += (consumo - 30) * 2;
    consumo -= consumo - 30;
   }
   if(consumo > 10){
     preco += (consumo - 10);
     consumo -= consumo - 10;
   }
  printf("%d\n", preco);
}
 */

// 15º
// Devagar, devagar, olhe o radar!!
// https://thehuxley.com/problem/564?quizId=8833

/* #include <stdio.h>
int main(){
  float velocidade, velocidade_max;
  scanf("%f %f", &velocidade_max, &velocidade);
  if(velocidade > velocidade_max * 1.5){
    printf("574.62\n7");
  }
  else if(velocidade > velocidade_max * 1.200001){
    printf("127.69\n5");
  }
  else if(velocidade > velocidade_max){
    printf("85.13\n4");
  }
  else{
    printf("0.00\n0");
  }
} */

/* Se colocar 1.2 da erro no ultimo caso de teste kkkkkkkkk pq ele coloca 1.2 como 1.199999999  */

// 16º
// Eleitor 
// https://thehuxley.com/problem/42?quizId=8833

/* #include <stdio.h>
int main(){
  int idade;
  scanf("%d", &idade);
if(idade < 16) printf("nao eleitor\n");
else if(idade < 18 || idade > 65) printf("eleitor facultativo\n");
else printf("eleitor obrigatorio\n");
return(0);
} */

/* 17º
Equação do Segundo Grau
https://thehuxley.com/problem/6?quizId=8833 */

/* #include <stdio.h>
#include <math.h>
int main(){
  double a,b,c, delta;
  scanf("%lf %lf %lf", &a, &b, &c);
  delta = b*b - 4*a*c;
  if(a == 0) printf("NEESG\n");
  else if(delta < 0) printf("NRR\n");
  else printf("%.2lf\n%.2lf\n", (-b + sqrt(delta))/(2*a), (-b - sqrt(delta))/(2*a));

} */

/* 18º
Igual ou diferente
https://thehuxley.com/problem/43?quizId=8833 */

/* #include <stdio.h>
int main(){
  int num1, num2, num3, resultado = 2;
  scanf("%d %d %d", &num1, &num2, &num3);
  if(num1 == num2 && num2 == num3 ) resultado = 1;
  else if(num1 == num2 || num1 == num3 || num2 == num3) resultado = 3;
  printf("%d\n", resultado);
} */

/* 19º
Ingresso no Cinema
https://thehuxley.com/problem/510?quizId=8833 */

/* #include <stdio.h>
int main(){
  int estudante, idoso;
  scanf("%d %d", &estudante, &idoso);
  if(estudante == 1 || idoso == 1) printf("1\n");
  else printf("0\n");
  return(0);
}
 */
/* 20º
Preço da Gasolina
https://thehuxley.com/problem/1532?quizId=8833 */
/* #include <stdio.h>
int main(){
  double litros, preco;
  char tipo;
  scanf("%lf %c", &litros, &tipo);
  if(tipo == 'A'){
    if(litros <= 20) preco = 1.9 * 0.97 * litros;
    else preco = 1.9 * 0.95 * litros;
  }
  else if(tipo == 'G'){
    if(litros <= 20) preco = 2.5 * 0.96 * litros;
    else preco = 2.5 * 0.94 * litros;
  }
  else{
    if(litros > 25) preco = 1.66 * 0.96 * litros;
    else preco = 1.66 * litros;
  }
  printf("R$ %.2lf\n", preco);
  return(0);
} */

/* 21º
Aumento condicional
https://thehuxley.com/problem/1524?quizId=8833 */

/* #include <stdio.h>
int main(){
  double salario, aumento, percentual;
  scanf("%lf", &salario);
  if(salario <= 280) percentual = 20;
  else if( salario <= 700) percentual = 15;
  else if( salario < 1500) percentual = 10;
  else percentual = 5;
  printf("%.2lf\n%.0lf\n%.2lf\n%.2lf", salario, percentual, salario * percentual/100, salario + salario * percentual/100);
  return(0);
} */
