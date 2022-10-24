#include <stdio.h>
#include <stdlib.h>

int multiplo(int num){
    
    int i, aux=0;
    
    for(i=0;i<num;i++){
        if(i%3 == 0){
            aux++;
        }
    }
    return aux;

}

int main(){

    int num, resp;
    
    printf("Entre com o valor:\n");
    scanf("%d",&num);
    resp = multiplo(num);
    printf("%d\n",resp);
    system("pause");
    return 0;

}
