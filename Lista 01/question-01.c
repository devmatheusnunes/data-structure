#include <stdio.h>
#include <stdlib.h>

int main(){

    float temp=0;
    printf("Informe a temperatura do paciente:\n");
    scanf("%f",&temp);
    
    if(temp <= 35.5 ){
        printf("Branco\n\n");
    }
    else if((temp > 35.5) && (temp <= 37.5)){
        printf("Azul\n\n");
    }
    else if((37.5 < temp) && (temp >= 38.5)){
        printf("Verde\n\n");
    }
    else if(temp < 38.5){
        printf("Vermelho\n\n");
    }
    system("pause");
    return 0;

}