#include <stdio.h>

void DrawShape(int sayi);

int main()
{
    int sayi;
    printf("Please Enter The Height (2*n) Of The Figure : ");
    scanf("%d",&sayi);

    if (sayi > 1){
        DrawShape(sayi);
    }
    else{
        printf("You Entered An Invalid Value");
    }
    return 0;
}

void DrawShape(int sayi){
    int i,j;
    int satir = sayi + 2;
    int k = sayi + sayi - 1;
    int bosluk = k-2;
    int yildiz = 0;

    for(i=0 ; i<satir ; i++){
        if (i == 0){                          /* 1. SATIR  _ _ */
            for(j=0 ; j<k ; j++){
                printf(" ");
            }
            printf("_ _\n");
        }
        else if (i == 1) {                    /* 2. SATIR  / | \ */
            for(j=0 ; j<k-1 ; j++){
                printf(" ");
            }
            printf("/ | \\ \n");
        }
        else {                              // ÜST ÜÇGEN
            for(j=0 ; j<bosluk ; j++){
                printf(" ");
            }
            printf("/ /");
            bosluk--;

            for (j=0 ; j<=yildiz ; j++){
                if(j==yildiz){
                    printf("*\\ \\");
                }
                else{
                    printf("* ");
                }
            }
            yildiz++;
            printf("\n");
        }
    }

    satir = sayi + 2;
    k = sayi + sayi - 1;
    bosluk = sayi-2;
    yildiz = 0;

    for(i=0 ; i<satir-1 ; i++){

        if (i == satir-2) {             /* SON SATIR  \_|_/ */
            for(j=0 ; j<k-1 ; j++){
                printf(" ");
            }
            printf("\\_|_/ \n");
        }
        else {                               // ALT ÜÇGEN
            for(j=0 ; j<bosluk ; j++){
                printf(" ");
            }
            printf("\\ \\");
            bosluk++;

            for (j=0 ; j<sayi ; j++){
                if(j==sayi-1){
                    printf("*/ /");
                }
                else{
                    printf("* ");
                }
            }
            sayi--;
            printf("\n");
        }
    }
    return 0;
}

