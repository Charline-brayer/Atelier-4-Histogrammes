#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50
#define GRADUATION 10   // un repere tous les 10 caracteres

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

    // Barres avec lignes de suivi
    for (int i = 0; i < NB_VALEURS; i++)
    {
        int longueur = (int)(valeurs[i] * echelle);

        printf("| ");
        for (int j = 0; j < MAX_LONGUEUR; j++)
        {
            if (j < longueur)
            {
                printf("x");
            }
            else if ((j + 1) % GRADUATION == 0)
            {
                printf(".");   // ligne de suivi
            }
            else
            {
                printf(" ");
            }
        }
        printf(" %d\n", valeurs[i]);
    }

    // Axe avec reperes
    printf("+-");
    for (int j = 0; j < MAX_LONGUEUR; j++)
    {
        if ((j + 1) % GRADUATION == 0)
        {
            printf("+");
        }
        else
        {
            printf("-");
        }
    }
    printf("\n");

    // Valeurs de la graduation (alignees sur les reperes)
    printf("  ");
    for (int p = GRADUATION; p <= MAX_LONGUEUR; p += GRADUATION)
    {
        printf("%10.1f", p / echelle);
    }
    printf("\n");

    return 0;
}