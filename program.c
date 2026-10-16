#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50

int main()
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };

    // Recherche du maximum
    int maximum = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > maximum)
        {
            maximum = valeurs[i];
        }
    }

    // Calcul de l'echelle
    float echelle = (float)MAX_LONGUEUR / maximum;

    // Affichage de l'histogramme
    for (int i = 0; i < NB_VALEURS; i++)
    {
        int longueur = (int)(valeurs[i] * echelle);

        printf("| ");
        for (int j = 0; j < longueur; j++)
        {
            printf("x");
        }
        printf(" %d\n", valeurs[i]);
    }
    printf("+-------------------------------------------------------\n");

    return 0;
}