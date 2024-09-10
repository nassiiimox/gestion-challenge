#include <stdio.h>
#include <stdlib.h>
 int val ;
  int ratt;
int main()
{
    int t[100];
    int n,s,m,i;
    printf("entrer le nombre des eleves ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("entrer les notes : ");
    scanf("%d",&t[i]);
    }
    s=0;
    for(i=0;i<n;i++){
    s=s+t[i];
    }m=s/n;
   int  min=100;
    for(i=0;i<n;i++){
    if (t[i]<min){
    min=t[i];

}
    }
int  max=0;
    for(i=0;i<n;i++){
            if (t[i]>max){
              max=t[i];

            }
    }

            for(i=0;i<n;i++){
                if(t[i]>12){

                val ++;

                }
            } ;
                for(i=0;i<n;i++){
                if(t[i]<12){

                    ratt++;

                }int choix;
                 do {
                printf(" \n 1 pour afficher la moyenne \n");
                 printf("2 pour afficher la plus elevee et le plus basse \n");
                  printf("3 pour afficher le nombre de validation \n ");
                   printf("4 pour afficher le nombre de rattrapage \n ");
                   scanf("%d",&choix);
                   switch(choix){
                   case 1 : printf("la moyenne des note est %d",m);
                   break;
                   case 2 : printf("la plus elevee note est %d le plus basse est %d ",max,min);
                   break;
                   case 3 : printf("le nombre de validation %d ",val);
                   break;
                  case 4 : printf("le nombre de rattrapage %d ",ratt);
                   break;
                   default : printf("entrer un nombre entre 1 et 5");
                   }
                   }while(choix!=5);
                }

    return 0;
}
