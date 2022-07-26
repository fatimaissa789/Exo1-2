#include <stdio.h>
#include <stdlib.h>

int main()
{
    double noteMath[2]; /*declaration des matières de type decimal*/
    double noteAng[2];
    double noteArb[2];
    char nom[25];
    double moyenneG, somme, coefftotal, Moymath, MoyAng, MoyArb; /**/
    int i = 0;                                                   // compteurs
    double SomMath = 0, SomAng = 0, SomArb = 0;
    int coefmath = 3, coefangl = 4, coefarb = 2;

    printf("saisir votre Nom\n");
    scanf("%s", nom);

    for (i = 0; i < 2; i++)

    {
        printf("%s Donner vos note en math[%d] :\n", nom,i + 1);
        scanf("%lf", &noteMath[i]);

        SomMath += noteMath[i];
    }

    Moymath = SomMath / 2;

    for (i = 0; i < 2; i++)
    {
        printf(" %s Donner vos note en anglais[%d] :\n", nom,i + 1);
        scanf("%lf", &noteAng[i]);
        SomAng += noteAng[i];
    }
    MoyAng = SomAng / 2;

    for (i = 0; i < 2; i++)
    {
        printf("%s Donner vos note en arabe [%d] :\n", nom, i + 1);
        scanf("%lf", &noteArb[i]);
        SomArb += noteArb[i];
    }
    MoyArb = SomArb / 2;

    coefftotal = coefmath + coefangl + coefarb;
    moyenneG = ((Moymath * coefmath) + (MoyAng * coefangl + (MoyArb * coefarb))) / coefftotal;

    printf("%s  Votre moyenne génèrale est:%.2f", nom, moyenneG);
    if (moyenneG < 10)
    {
        printf("mediocre\n");
    }
    if (moyenneG == 10)
    {
        printf("   passable\n");
    }
    if ((moyenneG > 10) && (moyenneG < 14))

    {
        printf("tres bien\n");
    }
    if (moyenneG > 14)
    {
        printf("   excellent");
    }
    return ;
}
