/*https://thehuxley.com/problem/4324/submission/3082424
Lembrando que até a lista 4 não pode usar nenhuma estrutura de repetição :D
*/

#include <stdio.h>

int checkValue(char letra_1, char letra_2, int vA,int vB,int vC,int vD,int vE,int vI,int vJ,int vK,int vL,int vM){
int nota = 0;
if(letra_1 == 'a') nota += vA;
else if(letra_1 == 'b') nota += vB;
else if(letra_1 == 'c') nota += vC;
else if(letra_1 == 'd') nota += vD;
else if(letra_1 == 'e') nota += vE;
if(letra_2 == 'i') nota *= vI;
else if(letra_2 == 'j') nota *= vJ;
else if(letra_2 == 'k') nota *= vK;
else if(letra_2 == 'l') nota *= vL;
else if(letra_2 == 'm') nota *= vM;
return(nota%100);
}

int checkVencedor(int ryan, int filipe, int ruan, int heron){
    if(ryan > filipe && ryan > ruan && ryan > heron){
        printf("Ryan %d - Vencedor\n", ryan);
    }
    else if(ryan < filipe && filipe > ruan && filipe > heron){
        printf("Filipe %d - Vencedor\n", filipe);
    }
    else if(ryan < ruan && filipe < ruan && ruan > heron){
        printf("Ruan %d - Vencedor\n", ruan);
    }
    else{
        printf("Heron %d - Vencedor\n", heron);
    }

    if(ryan < filipe && ryan < ruan && ryan < heron){
        printf("Ryan %d - Perdedor\n", ryan);
    }
    else if(ryan > filipe && filipe < ruan && filipe < heron){
        printf("Filipe %d - Perdedor\n", filipe);
    }
    else if(ryan > ruan && filipe >ruan && ruan < heron){
        printf("Ruan %d - Perdedor\n", ruan);
    }
    else{
        printf("Heron %d - Perdedor\n", heron);
    }
}

int main(){
    char l1_ryan, l1_heron, l1_ruan, l1_filipe, l2_ryan, l2_heron, l2_ruan, l2_filipe;
    int valor_a, valor_b, valor_c, valor_d, valor_e;
    int valor_i, valor_j, valor_k, valor_l, valor_m;
    int ryan, filipe, ruan, heron;
    scanf("%c %c %c %c %c %c %c %c", &l1_ryan, &l1_filipe, &l1_ruan, &l1_heron, &l2_ryan, &l2_filipe, &l2_ruan, &l2_heron );
    scanf("%d %d %d %d %d %d %d %d %d %d", &valor_a, &valor_b, &valor_c, &valor_d, &valor_e, &valor_i, &valor_j, &valor_k, &valor_l, &valor_m);
    ryan = checkValue(l1_ryan, l2_ryan, valor_a, valor_b, valor_c, valor_d, valor_e, valor_i, valor_j, valor_k, valor_l, valor_m);
    filipe = checkValue(l1_filipe, l2_filipe, valor_a, valor_b, valor_c, valor_d, valor_e, valor_i, valor_j, valor_k, valor_l, valor_m);
    ruan = checkValue(l1_ruan, l2_ruan, valor_a, valor_b, valor_c, valor_d, valor_e, valor_i, valor_j, valor_k, valor_l, valor_m);
    heron = checkValue(l1_heron, l2_heron, valor_a, valor_b, valor_c, valor_d, valor_e, valor_i, valor_j, valor_k, valor_l, valor_m);
    checkVencedor(ryan, filipe, ruan, heron);
    return(0);
}

