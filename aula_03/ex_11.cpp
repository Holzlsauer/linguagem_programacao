#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int deal(int arr[], int length) {
    int temp;
    bool sorteado;

    do {
        sorteado = false;
        temp = (rand() % 10) + 1;

        for (int i = 0; i < length; i++) {
            if (arr[i] == temp) {
                sorteado = true;
            }
        }
    } while (sorteado);
    return temp;
}

int main() {
    int player[20];
    int player_sum;
    int computer[20];
    int computer_sum;
    int rounds;
    int fim;
    srand(time(0));

    do {    
        // Starting hand
        rounds = 1;
        player[0] = (rand() % 10) + 1;
        player[rounds] = deal(player, rounds);
        computer[0] = (rand() % 10) + 1;
        computer[rounds] = deal(computer, rounds);
        rounds++;
        
        // Main loop
        do {
            player_sum = player[0];
            computer_sum = computer[0];
            system("clear");

            printf("Programa 21");
            printf("\nVC = %d", player[0]);
            for (int i = 1; i < rounds; i++) {
                printf(" + %d", player[i]);
                player_sum += player[i];
            }
            printf(" = %d", player_sum);
            
            printf("\nPC = X");
            for (int i = 1; i < rounds; i++) {
                printf(" + X");
                computer_sum += computer[i];
            }
            printf(" = X");

            // Check if player loses
            if (player_sum > 21) {
                printf("\n"); // gambiarra
                break;
            }        

            // Verifica limite de rounds
            if (rounds == 5) {
                printf("\nPara ver o ganhador !!!\nPressione ( ENTER )");
                scanf("%d", &fim); // gambiarra
                break;
            }
            printf("\nDeseja sortear mais um número?\nDigite (1 - Sim / 2 - Não): ");
            scanf("%d", &fim);

            // Check end game
            if (fim == 2) {
                break;
            }
            
            // Deal cards
            player[rounds] = deal(player, rounds);
            computer[rounds] = deal(computer, rounds);
            rounds++;

            if (rounds == 5) {
                break;
            }
        } while (true);

        player_sum = player[0];
        computer_sum = computer[0];
        system("clear");
        printf("Programa 21");
        
        printf("\nVC = %d", player[0]);
        for (int i = 1; i < rounds; i++) {
            printf(" + %d", player[i]);
            player_sum += player[i];
        }
        printf(" = %d", player_sum);

        printf("\nPC = %d", computer[0]);
        for (int i = 1; i < rounds; i++) {
            printf(" + %d", computer[i]);
            computer_sum += computer[i];
        }
        printf(" = %d", computer_sum);

        if (computer_sum > 21) {
            if (player_sum > 21) {
                printf("\nAMBOS FIZERAM MAIS DO QUE 21 !!!\n");
            } 
            else {
                printf("\nVC ganhou !!!\n");
            }
        } else {
            if (player_sum > 21) {
                printf("\nPC ganhou !!!\n");
            }
            else if (player_sum > computer_sum) {
                printf("\nVC ganhou !!!\nVC maior que PC !!!\n");
            } 
            else {
                printf("\nPC ganhou !!!\nPC maior que VC !!!\n");
            }
        }

        printf("\nDeseja jogar novamente?\nDigite (1 - Sim / 2 - Não): ");
        scanf("%d", &fim);

    } while (fim == 1);
}