#include <stdio.h>
#include <stdlib.h>

struct sCor{

    char p1[50];
    char p2[50];
    char p3[50];

};struct sCor Color;

int main(){

    int matriz[3][3],col, lin;
    struct sCor pixels;

    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            printf("entre com a cor:\n");
            gets(pixels.p1);
            gets(pixels.p2);
            gets(pixels.p3);
        }
        printf("\n");
    }

    for(lin=0;lin<3;lin++){
        for(col=0;col<1;col++){
            printf("%s\t",pixels.p1);
            printf("%s\t",pixels.p2);
            printf("%s\t",pixels.p3);
        }
        printf("\n");
    }
    system("pause");
    return 0;

}