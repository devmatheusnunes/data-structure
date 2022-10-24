#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5];
    int i,j,num=1;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=num;
            num++;
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",matriz[j][i]);
        }
        printf("\n");
    }
    system("pause");
    return 0;

}
