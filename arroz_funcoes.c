#include <stdio.h>
#include <time.h>
#include <random>
#include <stdlib.h>

int Creditos = 100;
unsigned int bet = 0;

int rollr(void){
  int n;
  srand(time(NULL));
  n=(rand()%37);
  printf("the number is...")
  delay(1000);
  printf(".");
  delay(1000);
  printf(".");
  delay(1000);
  printf(".");
  delay(1000);
  printf("%d !!\n", n);
  return n;
}
void comand_list(){
    printf("Welcome to the BCIW, The Biggest Casino In the World!! \n");
    printf("We've been having some technical problems lately and only the roulette is available...\n");
    printf("\t Balance:        %d", &Creditos);
    printf("\t Current Bet:    %d", &bet);
    printf("b <amount> -- the amount you want to bet \n");
    printf("n <number> -- the number you want to bet \n");
    printf("e -- automatically bets on an even number. Pays 2 to 1 \n");
    printf("o -- automatically bets on an odd number. Pays 2 to 1 \n");
    printf("c <amount> -- picks a color on the board red or black\n");
    printf("r -- roll \n");
    printf("h -- help \n");
    printf("s -- show balance \n");
    printf("l -- cash out/leave \n");
    return 0;
}

void help (void){
    printf("Well... Here is the manual: \n");
    printf("b <amount> -- the amount you want to bet \n");
    printf("n <number> -- the number you want to bet \n");
    printf("e -- automatically bets on an even number. Pays 2 to 1 \n");
    printf("o -- automatically bets on an odd number. Pays 2 to 1 \n");
    printf("c <amount> -- picks a color on the board red or black\n");
    printf("r -- roll \n");
    printf("h -- help \n");
    printf("s -- show balance \n");
    printf("l -- cash out/leave \n");
    printf("Red or black: Choose a color\n Red numbers are  1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36\n Black numbers are 2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35\n\n");
    return 0;
}

void show_Balance(void){
  printf("\t Balance:        %d", &Creditos);
  printf("\t Current Bet:    %d", &bet);
  return 0
}

/* DONNOT MAKE OPTION_SELECT FUNC, USELESS. DO INSTEAD WHAT IT GOINS IN EACH.
int option_select (){
    char choice;
    printf("Please select an option! We haven't got all day!!\n")
    scanf(">%c ", &choice);
    scanf("%d\n", &bet);
    switch (choice) {
      case "h":
        help();
        break;
      case "b":
        if (bet > Creditos)
          printf("Woah there, we wouldn't want you to go in debt would we?\n", );
        else if(bet <=0)
          printf("We're not here to trade candy, only money allowed"\n", );
        else{
          printf("You just bet %d for this round\n", bet);
          Creditos -= bet;
          printf("Current Credits:  %d", &Creditos);
        }
        break;
      case "n":
        if (betNumber < ) {
        }
    }
    return bet;
}
*/
