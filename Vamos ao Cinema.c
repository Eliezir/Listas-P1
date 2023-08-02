/* https://thehuxley.com/problem/4322/submission/3082037 */
#include <stdio.h>

int main(){
    int alunos,qnt_supervisor, onibus, capacidade, pessoas, capacidade_onibus, supervisores;
    scanf("%d %d %d %d", &alunos, &qnt_supervisor, &onibus, &capacidade);
    capacidade_onibus = onibus * capacidade;
    if(qnt_supervisor != 0){
        supervisores = alunos/qnt_supervisor;
    }
    else{
        supervisores = 0;
    }
    if(supervisores * qnt_supervisor < alunos && qnt_supervisor > 0) supervisores ++;
    pessoas = supervisores + alunos;
    if(alunos == 0){
        printf("Davi foi assistir o filme sozinho =(\n");
    }
    else if(pessoas <= capacidade_onibus){
        printf("Iremos ao cinema!\n");
        if(pessoas < capacidade_onibus){
            printf("Vagas Vazias = %d\n", capacidade_onibus - pessoas);
        }
        else{
            printf("Todas as vagas foram preenchidas.\n");
        }
    }
    else{
        printf("Não é possível.\nFalta %d vagas.", pessoas - capacidade_onibus);
    }
    return(0);
}
