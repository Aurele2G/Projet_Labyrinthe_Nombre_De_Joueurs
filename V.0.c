#include <stdio.h>


int main() {
    printf("Bienvenue dans le Labyrinthe !!\n");

    int NbrJ = 0;
    printf("Entrer le nombre de joueurs : ");
    scanf("%d", &NbrJ);

    if (NbrJ > 4) {
        printf("Il n'est pas possible de jouer a plus de 4 joueurs");
        printf(", entrer un nouveau nombre de joueurs : ");
        scanf("%d", &NbrJ);
    } else if (NbrJ < 2) {
        printf("Il n'est pas possible de jouer a moins de 2 joueurs");
        printf(", entrer un nouveau nombre de joueurs : ");
        scanf("%d", &NbrJ);
    }
    printf("Bonne Partie !!");
}
