/* 1º
Média 2
https://thehuxley.com/problem/274?quizId=8832 */

/* #include <stdio.h>

int main(){
    double num1,num2,num3;
    scanf("%lf %lf %lf", &num1, &num2 , &num3);
    printf("MEDIA = %.1lf",(num1 *2 +num2 *3 + num3 *5)/10);
    return(0);
}
 */
 
/* 2º  
Tabuada
 https://thehuxley.com/problem/22?quizId=8832 */

/* #include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= 9; i++){
        printf("%d x %d = %d\n", num, i, num*i);   
    }
     return(0); 
} */


/* 3º
Idade em segundos
https://thehuxley.com/problem/1042?quizId=8832 */

/* #include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    printf("%d", idade*365*24*3600);
    return(0);
}
 */


/* 4º
Salário
https://thehuxley.com/problem/279?quizId=8832 */

/* #include <stdio.h>

int main(){
    int num, hours;
    double per_hour;
    scanf("%d %d %lf", &num, &hours, &per_hour);
    printf("NUMBER = %d \n", num);
    printf("SALARY = R$ %.2lf", hours*per_hour);
    return(0);
} */


/* 5º
Extremamente Básico
https://thehuxley.com/problem/270?quizId=8832 */

/* #include <stdio.h>
int main(){
    int A, B, X;
    scanf("%d %d", &A, &B);
    X = A + B;
    printf("X = %d", X);
    return(0);
} */

/* 6º	
Fahrenheit para Celsius
https://thehuxley.com/problem/32?quizId=8832 */

/* #include <stdio.h>
int main(){
    double F, C;
    scanf("%lf", &F);
    C =(F - 32) * 5/9;
    printf("%.2lf\n", C);
    return(0);
}
 */

/*  7º
 Coma bem
 https://thehuxley.com/problem/40?quizId=8832 */

/*  #include <stdio.h>

 int main(){
    double price;
    scanf("%lf", &price);
    printf("%.2lf", price*1.1 );
    return(0);
 }
 */

/*  8º
 Área do Círculo
 https://thehuxley.com/problem/271?quizId=8832 */

/*  #include <stdio.h>

 int main(){
    double radius;
    scanf("%lf",&radius);
    radius /=100;
    printf("Area = %.4lf\n", radius*radius*3.14159);
    return(0);
 } */

/*  9º
 Bingo
 https://thehuxley.com/problem/16?quizId=8832 */

/*  #include <stdio.h>
 int main(){
    int number;
    scanf("%d", &number);
    printf("O numero sorteado foi: %d", number);
 }
 */
/*  10º
 Diferença
 https://thehuxley.com/problem/278?quizId=8832 */

/*  #include <stdio.h>

 int main(){
int A,B,C,D;
scanf("%d %d %d %d", &A, &B, &C, &D);
printf("DIFERENCA = %d", A*B - C*D);
return(0);

 } */

/* 11º
Média 1
https://thehuxley.com/problem/273?quizId=8832 */
/* #include <stdio.h>
int main(){
    double A, B;
    scanf("%lf %lf", &A, &B);
    printf("MEDIA = %.5lf\n", (A*3.5 + B*7.5)/11);
    return(0);
} */

/* 12º
Antecessor e Sucessor
https://thehuxley.com/problem/17?quizId=8832 */

/* #include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    printf("%d %d", number-1, number+1);
    return(0);
} */