#include<stdio.h>
#include<string.h>

main()
{
    char N1[50];
    char N2[50];
    char N3[50];



    scanf("%s",&N1);
    scanf("%s",&N2);
    scanf("%s",&N3);

    if(strcmp(N1,"vertebrado")==0){
        if(strcmp(N2,"ave")==0){
            if(strcmp(N3,"carnivoro")==0){
                printf("aguia\n");
            }
            else if(strcmp(N3,"onivoro")==0){
                printf("pomba\n");
            }
        }
        else if(strcmp(N2,"mamifero")==0){
            if(strcmp(N3,"onivoro")==0){
                printf("homem\n");
            }
            else if(strcmp(N3,"herbivoro")==0){
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(N1,"invertebrado")==0){
        if(strcmp(N2,"inseto")==0){
            if(strcmp(N3,"hematofago")==0){
                printf("pulga\n");
            }
            else if(strcmp(N3,"herbivoro")==0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(N2,"anelideo")==0){
            if(strcmp(N3,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else if(strcmp(N3,"onivoro")==0){
                printf("minhoca\n");
            }
        }
    }
}
