#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LIGNES 15

void afficher_ligne_histov(int t[], int taille, float y);

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

    // Affichage de l'histogramme vertical
    for (int i = 0; i < MAX_LIGNES; i++)
    {
        float y = (float)maximum * (MAX_LIGNES - i) / MAX_LIGNES;
        afficher_ligne_histov(valeurs, NB_VALEURS, y);
    }
    printf("+---------------------------------------\n");

    return 0;
}

// Affiche une ligne : une barre "xxx " pour chaque valeur >= y
void afficher_ligne_histov(int t[], int taille, float y)
{
    printf("| ");
    for (int k = 0; k < taille; k++)
    {
        if (t[k] >= y)
        {
            printf("xxx ");
        }
        else
        {
            printf("    ");
        }
    }
    printf("\n");
}