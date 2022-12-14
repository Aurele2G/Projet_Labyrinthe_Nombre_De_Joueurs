//
// Created by aurel on 09/12/2022.
//

#ifndef PROJET_LABYRINTHE_V_0_H
#define PROJET_LABYRINTHE_V_0_H
#define MAX 10
#include <stdio.h>
int main(void){
    int i = 0;
    char firstname[MAX] = "Joueur 1";
    int tailleLogique = 8;
    for (i = 0; i < tailleLogique; i++) {
        printf("%c", firstname[i]);
    }
#endif //PROJET_LABYRINTHE_V_0_H