/* Frutas
https://thehuxley.com/problem/321?quizId=8839 */

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    double mediaKg, mediaPreco;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++){
        double preco, kg = 1;
        scanf("%lf", &preco);
        mediaPreco += preco/n;
        char fruta[100];
        scanf(" %[^\n]", fruta);
        for(int j = 0; j < strlen(fruta); j++){
            if(fruta[j] == ' '){
                kg++;
            }
        }
        printf("dia %d: %.lf kg\n", i+1, kg);
        mediaKg += kg/n;
    }
    printf("%.2lf kg por dia\n", mediaKg);
    printf("R$ %.2lf por dia\n", mediaPreco);
}

/* Some dois números grandes!!
https://thehuxley.com/problem/526?quizId=8839 */
#include <stdio.h>
#include <string.h>

int main()
{
    char num1[1000], num2[1000], soma[1001];
    scanf("%s %s", num1, num2);
    int tam, dif1, dif2, mais = 0; 
    dif1 = strlen(num1) < strlen(num2) ? strlen(num1) - strlen(num2) : 0;
    dif2 = strlen(num2) < strlen(num1) ? strlen(num2) - strlen(num1) : 0;
    tam = strlen(num1) > strlen(num2) ? strlen(num1) : strlen(num2);

    for (int i = tam - 1; i >= 0; i--)
    {
        int num = (i + dif1 >= 0 ? (num1[i + dif1] - '0') : 0) + (i + dif2 >= 0 ? (num2[i + dif2] - '0') : 0) + mais;
        if (num > 9)
        {
            soma[i] = (num % 10) + '0';
            mais = 1; 
        }
        else
        {
            soma[i] = num + '0';
            mais = 0; 
        }
    }
    if (mais)
    {
        soma[tam] = '1'; 
        tam++;
    }
    soma[tam] = '\0'; 
    printf("%s", soma);

    return 0;
}


// L4Q2 - Soma Divina
// https://thehuxley.com/problem/1279?quizId=8839
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
      if(n == 0){
        printf("Vazia");
        return 0;
    }
    
    int matrizA[n][n], matrizB[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\n", matrizA[i][j] + matrizB[i][j]);
        }
    }
    
}

// https://thehuxley.com/problem/1291?quizId=8839
// Brincando com matrizes

#include <stdio.h>

int main(){
    double media;
    int maior = 0 , delta = 0, diagonal = 0;

    for(int i = 1; i < 10; i ++){
        int num;
        scanf("%d", &num);
        media += num;
        if(i == 1) maior = num;
        if(i == 1 || i == 5 || i == 9)
            diagonal += num;
        if(num > maior)
            maior = num;
    }
    media /= 9;
    delta  = maior > 0 ?  1 : maior < 0 ? -1 : 0;
    printf("%.2lf %d %d %d", media, maior, delta, diagonal);

}


// Sequência Lógica III
// https://thehuxley.com/problem/959?quizId=8839
#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    for(int i = 0; i*z+1 <= y; i ++){
        if(i % x == 0){
            printf("%d", i*z+1);
        }
        else{
            printf(" %d", i*z+1);
        }
        if((i+1) % x == 0 && (i != 0 || x == 1)) printf("\n");
    }
}

// https://thehuxley.com/problem/326?quizId=8839
// Sequencia Lógica II

#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    for(int i = 1; i <= y; i ++){
        if((i-1) % x == 0){
            printf("%d", i);
        }
        else{
            printf(" %d", i);
        }
        if(i % x == 0 && (i != 0 || x == 1)) printf("\n");
    }
}


