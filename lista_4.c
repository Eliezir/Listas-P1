// #include <stdio.h>

// double fatorial(double num){
//   if(num == 0){
//     return 1;
//   }
//   else{
//     return num*fatorial(num-1);
//   }
  
// }

// int ehPrimo(int x, int contador){
//     if(x == contador){
//         return x;     
//     }
//     else if(x % contador == 0 || x < 2){
//         if(x % 2 == 0) return ehPrimo(x + 1, 2);
//         else return ehPrimo(x + 2, 2);
//     }
//     else{
//         if(contador == 2) contador -=1;
//         return(ehPrimo(x, contador+2));
//     }
    
// }

// int repeticao(int num, double output, double contador){
//     double divisor = contador > 1 ? ehPrimo(contador,2) : 1;
//   if(contador > num){
//     printf("\n%.2lf\n", output);
//     return output;
//   }
//   else{
//     printf("%0.lf!/%0.lf", contador, divisor);
//     if(contador != num ){
//       printf(" + ");
//     }
//     output += fatorial(contador)/divisor;
//     repeticao(num, output, contador + 1);
//   }
// }

// int main(void) {
//   int contador;
//   scanf("%d",&contador);
//   if(contador == 0){
//     printf("0.00");
//     return 0;
//   }
//   repeticao(contador,0,1);
//   return 0;
// }

// #include <stdio.h>

// int ehDivisivel(int num, int contador, int divi, int ehPar){
//     if( num < contador){
//         if(divi != 0) printf("%d\n", divi);
//         else printf("O numero nao possui divisores multiplos de 3!\n");
//         return 0;
//     }
//     else{
//         if(num % contador == 0 && contador % 3 == 0) divi += 1;
//         ehDivisivel(num, contador + ehPar, divi, ehPar);
//     }   
// }

// int main(){
//     int num, ehPar, contador;
//     scanf("%d",&num);
//     ehPar = num % 2 == 0 ? 1 : 2;
//     contador = ehPar == 1 ? 2 : 3;
//     ehDivisivel(num, contador, 0, ehPar );
// }

#include <stdio.h>


int daily(int programas, int linhas, int melhor_dia, int dia){
    if(dia < 8){
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d", programas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d", linhas)

        return 0;
    }
    int p, l, p_daily = 0, l_daily = 0;
    scanf("%d %d", &p, &l);
    if(p > 4) p_daily = 1;
    if(l > 99) l_daily = 1;
    return daily(programas + p_daily, linhas + l_daily, )
}

int repeticao(int contador){
    if(contador < 8){
        return
    }
    else return 1;
}

int main(){


}
