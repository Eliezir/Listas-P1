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

#include <stdio.h>
int main(){
    int questions, answers;
    scanf("%d %d", &questions, &answers);
    double result = answers/(questions/100);

    return(0);
}
