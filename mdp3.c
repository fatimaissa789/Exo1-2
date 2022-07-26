#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Creation d'une fonction 

bool fonction(char buffer[80]){
    bool isCorrect = true;

      for (int i = 0; i < strlen(buffer); i++)
        {
            if ( ! isdigit( buffer[i] ) ) { // Cette fonction permet de tester si un caractère est un chiffre décimal ou non.
            isCorrect = false;
        }
        }
        return isCorrect;

}
/***fonction principal***/
int main()
{

    char buffer[80];
    int tab[5] = {12, 13, 14, 15, 16};
    int i = 0;
    int reponse;

    printf("entrer votre mdp \n");
    scanf("%s", buffer); //Entrer les caracteres dans le tableau
                
    bool isCorrect=fonction(buffer);//appel de la fonction et lui donnerdes argumeents
    size_t length = strlen(buffer);  

    // Verification si le nbre entrée est dans le tableau ou pas
    while (i <2)
    {
        

          
         
        if (isCorrect)
        {
            printf("Votre entré (%s)est un nombre\n",buffer);

            reponse = atoi(buffer); // Conversion des caractères en entier

            for (int j = 0; j < 5; j++)
            {
                if (tab[j] == reponse)
                {
                    printf("correct \n");
                    return 0;
                }
            }
            /*Commander le nombre d'essaie à 3 tentatives dans le cas ou on a un entier et 
            que celui-ci n'est pas enregistrer dans le tableau*/
           // printf("voici le ii  vrai %d: \n", i);

            if (i == 0)
            {
                printf(" Faux ,Essayer encore \n");
            scanf("%s", buffer);
            }
            else if (i == 1)
            {
                printf(" Faux ,avant dernier essaie \n");
                scanf("%s", buffer);

            }
            
            else{
                printf("Désolé,vous etes bloque");
                return 0;
            }
            
            //fin Commander le nombre d'essaie
        }
        else
         /*Commander le nombre d'essaie à 3 tentatives dans le cas ou on a un mot et 
            qu'il faudrait reessayer pour entrer un nombre'*/
        {
           printf("Ceux que vous avez ecrit (%s) n'est pas un nombre\n", buffer);
            //printf("voici le ii  %d: \n", i);

           if (i == 0)
           {
                printf(" Faux ,Essayer en utilisant des nombres \n");
                 scanf("%s", buffer);
                 isCorrect=fonction(buffer);
            }
            else if (i == 1)
            {
                printf(" Faux, Reessayer en utilisant des nombre\n");
                 scanf("%s", buffer);
                        isCorrect=fonction(buffer);

            }

            else
            {
                printf(" Désolé,vous etes bloqué\n");
                       isCorrect=fonction(buffer);
                return 0;
            }
           
            
        }
        i++;
       
    }
     //printf("Ce que vous avez ecrit (%s) n'est pas un nombre\n", buffer);

   
    return EXIT_SUCCESS;
}