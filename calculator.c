#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operateur;
    float num1, num2, resultat = 0.0;

    // Demande à l'utilisateur d'entrer les nombres à calculer !
    printf("veillez entrer les nombres: \n");
    scanf("%f%c%f", &num1, &operateur, &num2);

    // Pour parcourant les opérateurs disponible dans mon mini calculatrice
    while (operateur != '+' && operateur != '*' && operateur != '-' && (operateur != '/' && num2 != 0)){
        printf("Cet opérateur n'est pas disponible !\n");
        printf("Ou vous essayer la division par ZÉRO ce qui n'est pas possible !\n");
        printf("veillez ressayer à nouveau :\n");
        // En cas d'erreur on redemande à l'utilisateur 
        scanf("%f%c%f", &num1, &operateur, &num2);
    }

    // Condition de mon calculatrice pour tcheker l'operateur et effectuer la calcule d'une manière simple
    if (operateur == '+')
    {
        resultat = num1 + num2;
        printf("Le resultat est : %.2f\n", resultat);
    }
    if (operateur == '*')
    {
        resultat = num1 * num2;
        printf("Le resultat est : %.2f\n", resultat);
    }
    if (operateur == '-')
    {
        resultat = num1 - num2;
        printf("Le resultat est : %.2f\n", resultat);
    }
    if (operateur == '/')
    {
        resultat = num1 / num2;
        printf("Le resultat est : %.2f\n", resultat);
    }
    
    return 0;
}