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

#include <stdio.h>
#include <math.h>

int main(){
    int potencia;
    double level;
    scanf("%lf",&level);
    if(level >= 1 && level <= 20) potencia = 20 + pow(level, 3);
    else if(21 <= level && level <= 40)  potencia = 8000 + pow((level -10),2);
    else if(level >= 41 && level <=60)  potencia = 9000 + 5*level;
    else if (level >= 61 && level <=80)  potencia = 9300 + 2*level;
    else {potencia = 9500 + level;}
    printf("Potencia de : %d W\n", potencia);
    return(0);
}