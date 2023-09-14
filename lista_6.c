/* Quantas vezes x apareceu?
https://thehuxley.com/problem/696?quizId=8838 */

#include <stdio.h>

int contarNum(int numeros[], int contador, int aparece){
    if(contador == 10) {
        printf("%d\n", aparece);
        return 0;
    };
    if(numeros[contador] == numeros[10]) aparece++;
    return contarNum(numeros, contador + 1, aparece);
}


int input(int numeros[], int contador){
    if (contador == 10) {
        scanf("%d", &numeros[contador]);
        return contarNum(numeros, 0, 0);
    }
    scanf("%d", &numeros[contador]);
    return input(numeros, contador + 1);
}

int main(){
int numeros[11];
input(numeros, 0);
}


/* Figurinhas dos Irmãos
https://thehuxley.com/problem/4?quizId=8838 */



#include <stdio.h>

int includes(int array[], int contador, int numero){
    if(contador == -1) return 0;
    if(array[contador] == numero) return 1;
    return includes(array, contador - 1, numero);
}


int input(int figurinhas[], int contador, int figMaria, int figJoao, int arrayMaria[], int arrayJoao[], int valMaria, int valJoao, int qntd){
    if(contador == qntd) {
        printf("%d\n", figJoao);
        printf("%d\n", figMaria);
        valMaria > valJoao ? printf("%d\n", valMaria) : printf("%d\n", valJoao);
        return 0;
    }
    scanf("%d", &figurinhas[contador]);
    if(figurinhas[contador] % 2 == 0){
        figJoao += 1;
        includes(figurinhas, contador -1, figurinhas[contador]) == 0 ? valJoao += figurinhas[contador] : valJoao;
        arrayJoao[contador] = figurinhas[contador];
    }
    else{
        figMaria += 1;
        includes(figurinhas, contador - 1, figurinhas[contador]) == 0 ? valMaria += figurinhas[contador] : valMaria;
        arrayMaria[contador] = figurinhas[contador];
    }
    return input(figurinhas, contador + 1, figMaria, figJoao, arrayMaria, arrayJoao, valMaria, valJoao , qntd);
}


int main(){
    int qntd;
    scanf("%d", &qntd);
    int figurinhas[qntd], arrayMaria[qntd], arrayJoao[qntd];
    input(figurinhas, 0, 0, 0, arrayMaria, arrayJoao , 0, 0, qntd);
}


/* https://thehuxley.com/problem/76?quizId=8838
Correção de Provas */

 #include <stdio.h>
int freqAbsoluta(double array[], int contador, int maior, int num, int freq, int maiorFreq, int alunos){
    if(contador == alunos) {
        if(num > 10) return maior;
        return freqAbsoluta(array, 0, maior, num + 1 , 0, maiorFreq, alunos);
    }
    if(array[contador] == num) freq += 1;
    if (freq > maiorFreq) {
        maior = num;
        maiorFreq = freq;
    }
    return freqAbsoluta(array, contador + 1, maior, num, freq, maiorFreq, alunos);
}

int fazMedia(double notas[], int alunos, int contador, double aprovados, int freqNota){
    if(contador > alunos) {
        double freqAprovados = aprovados * 100 / alunos;
        printf("%.1lf%%\n", freqAprovados);
        printf("%d.0\n" , freqAbsoluta(notas, 0, 0, 0, 0, 0 , alunos));
        return 0;
    }
    if(notas[contador] >= 6) aprovados +=1;
    return fazMedia(notas, alunos, contador + 1 , aprovados, freqNota);
}

int correcao(char gabarito[],int contador, double nota, int numAluno){
    if(contador == 10){
        printf("%d %.1lf\n", numAluno, nota);
        return nota;
    }
    char resposta;
    scanf(" %c", &resposta);
    if(resposta == gabarito[contador]) nota +=1;
    return correcao(gabarito, contador + 1, nota, numAluno);
}


int input(char gabarito[], int ehGabarito, double notas[], int qntdAlunos ){
    if(ehGabarito < 10){{
        scanf("%c", &gabarito[ehGabarito]);
        return input(gabarito, ehGabarito + 1, notas, 0);
    }}
    int numAluno;
    scanf("%d", &numAluno);
    if(numAluno == 9999) return fazMedia(notas, qntdAlunos, 0, 0, 0);
    notas[numAluno-1] = correcao(gabarito, 0, 0, numAluno);
    qntdAlunos += 1;
    return input(gabarito, 11, notas, qntdAlunos);
}

int main(){
    char gabarito[10];
    double notas[1000];
    input(gabarito, 0, notas, 0);
}
 

// Maior e menor elemento de um array
// https://thehuxley.com/problem/1858?quizId=8838

#include <stdio.h>

int func(int array[], int maior, int menor, int i){
    if(i == 6){
       return printf("%d\n%d\n", menor, maior);
    }
    if(array[i] > maior){
        maior = array[i];
    }
    if(array[i] < menor){
        menor = array[i];
    }
    return func(array, maior, menor, i+1);
}


int main(){
        int array[6];
        scanf("%d%d%d%d%d%d",&array[0],&array[1],&array[2],&array[3],&array[4],&array[5]);
        func(array, array[0], array[0], 0);
}

// Inverter uma string
// https://thehuxley.com/problem/247?quizId=8838

#include <stdio.h>

int invert(char string[], int i){
    if(string[i] == '\0'){
        return 0;
    }
    invert(string, i+1);
    printf("%c", string[i]);
}


int main(){
    char string[255];
    scanf("%s", string);
    invert(string, 0);
}

// Inverso
// https://thehuxley.com/problem/72?quizId=8838

#include <stdio.h>


int input(int array[], int n, int i){
    if(i == n){
        return 0;
    }
    scanf("%d", &array[i]);
    input(array, n, i+1);
    printf("%d ", array[i]);
}


int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    input(array, n, 0);
}