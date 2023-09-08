#include <stdio.h>

int main() {
  int flaWins = 0;
  int fla = 0, cor = 0;
  char wins[5];
  int players[2];
  int goals[2];

  scanf("%c %c %c %c %c", &wins[0], &wins[1], &wins[2], &wins[3], &wins[4]);
  for (int i = 0; i <= 4; i++) {
    if (wins[i] == 'f') {
      flaWins++;
    }
  }
  if (flaWins > 2) {
    fla += 40;
  } else {
    cor += 40;
  };
  scanf("%d %d", &players[0], &players[1]);
  if (players[0] == 1) {
    fla += 20;
  }
  if (players[1] == 1) {
    cor += 20;
  }

  scanf("%d %d", &goals[0], &goals[1]);
  if (goals[0] > goals[1]) {
    fla += 15;
  } else {
    cor += 15;
  }

  double avgGoals[2];
  scanf("%lf %lf", &avgGoals[0], &avgGoals[1]);
  if (avgGoals[0] >= 2)
    fla += 10;
  if (avgGoals[1] >= 2)
    cor += 10;

  if (fla > cor) {
    printf("Luiza tem mais chances de comer o brownie\n");
    printf("Pontos: %i", fla);
  } else {
    printf("Pedro tem mais chances de comer o brownie\n");
    printf("Pontos: %i", cor);
  }
  return 0;
}
