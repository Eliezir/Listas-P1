#include <stdio.h>

float  buff(int nivel){
    if(nivel <= 5 ) return(1.2);
    else if(nivel <= 10) return (1.5);
    else if(nivel <= 15) return (1.8);
    else return(2.0);
}

int main(){
    int nivel1, nivel2;
    double poder1, vida2;
    scanf("%d %lf %d %lf", &nivel1, &poder1, &nivel2, &vida2);
    if(nivel1 < 1 || nivel2 < 1) {
        printf("Nivel abaixo\n");
        return(0);
    }
    else if(nivel1 > 20 || nivel2 > 20) {
        printf("Nivel acima\n");
        return(0);
    }
    else{
        poder1 *= buff(nivel1);
        vida2 *= buff(nivel2);
    }
    if(poder1 >= vida2){
        printf("Personagem 1 venceu\nDano causado: %.2lf\n", poder1);
    }
    else printf("Personagem 2 venceu\nVida restante: %.2lf\n", vida2 - poder1);
    return(0);
}


