#include <stdio.h>



int scan(int tamanho, int grupo[], int contador, int sequencia, int maior){
    if(tamanho  == contador) return maior;
    scanf("%d", &grupo[contador]);
    if(contador > 0){
        if(grupo[contador] != grupo[contador - 1]){
            sequencia++;
            if(sequencia > maior) maior = sequencia;
    }
    else{
        sequencia = 1;
    }
}
return scan(tamanho, grupo, contador + 1, sequencia, maior);
}

int fakeFor(int n, int maior){
    if(n == 0) return maior;
    int tamanhoGrupo;
    scanf("%d", &tamanhoGrupo);
    int grupo[tamanhoGrupo];
    int num = scan(tamanhoGrupo, grupo, 0, 1, 1 );
    if(num > maior) maior = num;
    return fakeFor(n - 1, maior);
}

int main(){
    int grupos, maior;
    scanf("%d", &grupos);
    maior = fakeFor(grupos, 0);
    printf("%d\n", maior);
}
