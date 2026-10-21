#include <stdio.h>

int main(){
    float nota;
    
    do {   
    printf("Digite sua nota(0 a 10): ");
    scanf("%f",&nota);
    if(nota<0 || nota > 10){
        printf("nota inválida: ! Tente Novamente. \n");
    }
  } while (nota <0 || nota >10);

    printf("nota registrada: %.lf\n", nota);
    return 0;
}
