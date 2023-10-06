/* Matriz de votação
https://thehuxley.com/problem/2131?quizId=8840 */

/*  #include <stdio.h>

int main(){
    int princesas, eleitores;
    scanf("%d %d", &princesas, &eleitores);
    // int votos[100] = {[0 ... 99] = 0};
    int votos[princesas];
   for(int e = 0 ; e < eleitores; e++){
    for(int i = 0; i < princesas; i++){
        e == 0 ? votos[i] = 0 : 0;
        int voto;
        scanf("%d", &voto);
        votos[i] += voto;
    }
   }
   for(int i = 0; i < princesas; i++){
       printf("Princesa %d: %d voto(s)\n", i+1,votos[i]);
   }
}  */

// Operação bancária
// https://thehuxley.com/problem/1026?quizId=8840

/* #include <stdio.h>

int main(){
    double operacoes[100][100], credito = 0, debito = 0;
    int contador = 0;
    for(int i = 0; i < 100; i++){
        double type;
        scanf("%lf", &type);
        if(type == -1){
            break;
        }
        operacoes[i][0] = type;
        scanf("%lf", &operacoes[i][1]);
        contador ++;
    }
    for(int i = 0; i < contador; i++){
        if(operacoes[i][0] == 1){
            credito += operacoes[i][1];
        }else{
            debito += operacoes[i][1];
        }
    }
    printf("Creditos: R$ %.2lf\nDebitos: R$ %.2lf\nSaldo: R$ %.2lf", credito, debito, credito - debito);
}
 */

/* // https://thehuxley.com/problem/2103?quizId=8840
// L4Q1 - Duelo familia

#include <stdio.h>

int main(){
    int luke, vader;
    scanf("%d %d", &luke, &vader);
    for(int rodadas = 1; rodadas <= 7; rodadas ++){
        int ataqLuke = 0, ataqVader = 0, matrizLuke = 1, matrizVader = 1 , danoLuke = 0, danoVader = 0, posMatrizLuke = 0, posMatrizVader = 0;
        for(int i = 1; i < 10; i++){
            int ataq;
            scanf("%d", &ataq);
            if(ataq == 1){
                ataqLuke ++;
                posMatrizLuke += i;
                if(i % 2 == 0) danoLuke = -1;
                else if( i == 3) matrizLuke = 2;
                if(ataqLuke > 3) danoLuke = -1;
            }
            if(i == 9 && (ataqLuke != 3 || posMatrizLuke != 15)) danoLuke = -1;
        }
        for(int i = 1; i < 10; i++){
             int ataq;
            scanf("%d", &ataq);
              if(ataq == 1){
                ataqVader ++;
                posMatrizVader += i;
                if(i % 2 == 0) {
                danoVader = -1;
                }
                else if( i == 3) matrizVader = 2;
                if(ataqVader > 3) danoVader = -1;
            }
            if(i == 9 && (ataqVader != 3 || posMatrizVader != 15)) danoVader = -1;
        }
        if(danoLuke != -1 ){
            if(danoVader != -1)
              {
                  if(matrizVader == matrizLuke) {
                    luke -=15;
                    vader -=15;
                }
              }
            else vader -=15;

        }
        else if(danoVader != -1) luke -=15;
    }
    if(luke > vader) printf("Luke Skywalker venceu.\n");
    else if(vader > luke) printf("Darth Vader venceu.\n");
    else printf("Houve empate.\n");
} */

/* Brincando com matrizes II
https://thehuxley.com/problem/1302?quizId=8840 */

/* #include <stdio.h>

int main(){
    double media = 0;
    int menor = 0 , delta = 0, notDiagonal = 0, positivos = 0;

    for(int i = 1; i < 10; i ++){
        int num;
        scanf("%d", &num);
       if(num > 0){
        media += num;
        positivos ++;
       }
        if(i == 1) menor = num;
        if(i != 1 && i != 5 && i != 9)
            notDiagonal += num;
        if(num < menor)
            menor = num;
    }
    media /= positivos;
    delta  = menor % 2 == 0 ? 1 : 0;
    printf("%.2lf %d %d %d", media, menor, delta, notDiagonal);

} */

// Apostas na Mega Sena
// https://thehuxley.com/problem/2048?quizId=8840

/* #include <stdio.h>

int main (){
    int nApostas, nGanhadores = 0, nSorteados[6];
    scanf("%d", &nApostas);
    int apostas[nApostas][10];
    for(int i = 0; i < nApostas; i ++){
        int counter = 0;
        for(int j = 0; j < 10; j++){
            scanf("%d", &apostas[i][j]);
            char comma;
            scanf("%c", &comma);
            if(comma == '\n') break;
        }
        if(counter == 9) break;
         counter ++;
    }
     for(int i = 0; i < 6; i++){
        scanf("%d", &nSorteados[i]);
     }
     for(int i = 0; i < nApostas; i ++){
            int acertos = 0;
            for(int numSorteio = 0; numSorteio < 6; numSorteio++){
               for(int numAposta = 0; numAposta < 10; numAposta++){
                   if(nSorteados[numSorteio] == apostas[i][numAposta]){
                       acertos ++;
                   }
               }
            }
            if(acertos == 6){
                nGanhadores ++;
            }

     }
     printf("Total de ganhadores: %d\n", nGanhadores);
}
 */

// Jogo do sapo
// https://thehuxley.com/problem/709?quizId=8840

/* #include <stdio.h>

int checkPosition(int n, int pos){
    while(pos >= n || pos < 0){
    if(pos >= n ) pos -= n;
    if(pos < 0) pos = n + pos;
    }
    return pos;
}

int main(){
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);
    int tabuleiro[n];
    int jogadores[m];

    for (int i = 0; i < n; i++) scanf("%d", &tabuleiro[i]);
    for(int rodada = 0; rodada < o; rodada++){
        for(int i = 0; i < m; i++){
            if(rodada == 0) jogadores[i] = 0;
            int dado;
            scanf("%d", &dado);
            jogadores[i] += dado;
            jogadores[i] = checkPosition(n, jogadores[i]);
            jogadores[i] += tabuleiro[jogadores[i]];
            jogadores[i] = checkPosition(n, jogadores[i]);
        }
    }
    for(int i = 0; i< m; i++){
        printf("%d\n", jogadores[i]);
    }
    return 0;
} */

// Colisão no Mapa
// https://thehuxley.com/problem/479?quizId=8840

/*
#include <stdio.h>

int main(){
    int n, m, qntdComandos;
    scanf("%d %d", &n, &m);
    int mapa[n][m];
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            scanf("%d", &mapa[j][i]);
        }
    }
    scanf("%d", &qntdComandos);
    char comandos[qntdComandos];
    for(int i = 0; i < qntdComandos; i++){
        scanf(" %c", &comandos[i]);
    }
    int x, y;
    scanf("%d %d", &y, &x);
    for(int i = 0; i < qntdComandos; i++){
        switch (comandos[i])
        {
        case 'C':
            if(y-1 < 0) break;
            y -= mapa[x][y-1] == 1 ? 1 : 0;
            break;
        case 'B':
            if(y+1 >= m) break;
            y += mapa[x][y+1] == 1 ? 1 : 0;
            break;
        case 'D':
            if(x+1 >= n) break;
            x += mapa[x+1][y] == 1 ? 1 : 0;
            break;
        case 'E':
            if(x-1 < 0) break;
                x -= mapa[x-1][y] == 1 ? 1 : 0;
            break;
        default:
            break;
        }
    }
    printf("(%d,%d)", y, x);
} */

// Esta solução do Sudoku está correta?
// https://thehuxley.com/problem/789?quizId=8840

#include <stdio.h>
int main()
{
    int jogos;
    scanf("%d", &jogos);
    int instancias[jogos];
    for (int jogo = 0; jogo < jogos; jogo++)
    {
        int sudoku[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &sudoku[i][j]);
            }
        }
        //linhas
         for (int i = 0; i < 9; i++)
        {
            int checker[] = {1,2,3,4,5,6,7,8,9};
            for (int j = 0; j < 9; j++)
            {
                if(checker[sudoku[i][j] - 1] == 0){
                    instancias[jogo] = 1;
                    break;
                }
                checker[sudoku[i][j] - 1] = 0;
            }
        }
        //coluna
           for (int i = 0; i < 9; i++)
        {
            int checker[] = {1,2,3,4,5,6,7,8,9};
            for (int j = 0; j < 9; j++)
            {
                if(checker[sudoku[j][i] - 1] == 0){
                    instancias[jogo] = 1;
                    break;
                }
                checker[sudoku[j][i] - 1] = 0;
            }
        }
        //zona
          for (int zona = 0; zona < 9; zona++) {
        int checker[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int linhaInicial = (zona / 3) * 3;
        int colunaInicial = (zona % 3) * 3;
        for (int i = linhaInicial; i < linhaInicial + 3; i++) {
            for (int j = colunaInicial; j < colunaInicial + 3; j++) {
                if (checker[sudoku[i][j] - 1] == 0) {
                    instancias[jogo] = 1;
                    break;
                }
                checker[sudoku[i][j] - 1] = 0;
            }
        }
    }
    }
    for(int jogo = 0; jogo < jogos; jogo ++){
        printf("Instancia %d\n", jogo+1);
        instancias[jogo] == 1 ? printf("NAO\n\n") : printf("SIM\n\n");
    }
}

