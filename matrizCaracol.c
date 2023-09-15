// https://thehuxley.com/problem/197/code-editor/
// Matriz caracol

#include <stdio.h>

int rodadas = 0;
int x = 0;
int y = 0;
int turno = 0;

int printMatriz(int n, int matriz[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for( int j = 0; j < n; j++)
        {
            printf("%d\n", matriz[j][i]);
        }
    }
}

int desce(int n, int matriz[n][n])
{
    if(y == n - turno){
         y -=1;
         x +=1;
         return matriz[n][n];
    }
    scanf("%d", &matriz[x][y]);
    rodadas +=1;
    y +=1;
    return desce(n, matriz);
}

int sobe(int n, int matriz[n][n])
{
    if(y == turno - 1) {
        x -=1;
        y +=1;
        turno +=1;
        return matriz[n][n];
    }
    scanf("%d", &matriz[x][y]);
    rodadas +=1;
    y -=1;
    return sobe(n, matriz);
}

int direita(int n, int matriz[n][n])
{
    if(x == n - turno) {
        x -=1;
        y -=1;
        return matriz[n][n];
    }
    scanf("%d", &matriz[x][y]);
    rodadas +=1;
    x +=1;
    return direita(n, matriz);
}

int esquerda(int n, int matriz[n][n])
{
    if(x == turno-1) {
        x +=1;
        y +=1;
        return matriz[n][n];
    }
    scanf("%d", &matriz[x][y]);
    rodadas +=1;
    x -=1;
    return esquerda(n, matriz);
}


int scanMatriz(int n, int matriz[n][n], int direcao){
    if(rodadas == n*n){
        printMatriz(n, matriz);
        return 0;
    }
    if(direcao == 1){
        desce(n, matriz);
    }
    else if(direcao == 2){
        direita(n, matriz);
    }
    else if(direcao == 3){
        sobe(n, matriz);
    }
    else if(direcao == 4){
        esquerda(n, matriz);
    }
    
    scanMatriz(n, matriz, direcao == 4 ? 1 : direcao + 1);
}





int main()
{
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    scanMatriz(n, matriz, 1);
    return 0;
}
