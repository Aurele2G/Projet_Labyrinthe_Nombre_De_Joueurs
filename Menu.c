//
// Created by aurel on 12/12/2022.
//
#include <stdio.h>
#include "ReglesEtCredits.h"

int main(void) {
    int choix;
    do{
        printf("MENU\n\n"
               "Veuillez selectionner en indiquant le chiffre correspondant\n\n"
               "1. Nouvelle partie\n2. Regles\n3. Credits\n4. Quitter\n");
        scanf("%d\n", &choix);
    }
    while((choix>4) && (choix=0));
    if (choix==1){
        printf("ok");//instructions pour nouvelle partie
    }
    else if (choix==2){
        AfficherRegles();
    }
    else if (choix==3){
        AfficherCredits();
    }
    else if (choix==4){
        printf("Fermeture du jeu\n");
        return 0;
    }
    return 0;
}
