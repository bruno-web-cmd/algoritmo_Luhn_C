#include <stdio.h>
#include <string.h>

int main (){
    char cartao[20];
    int soma= 0;
    int devedobrar= 0;
    int digitos;

    printf("Digite o numero do cartao: ");
    scanf("%s", &cartao);

    int tamanho = strlen (cartao);


    for ( int i = tamanho -1; i >=0; i--){  // i-- pra ser de baixo pra cima como o conceito do mano la <3
        int digito= cartao[i]-'0';

        if (devedobrar ==1 ){
            digitos = digitos *2;
            if(digitos >9){
                digitos = digitos -9;
            } 
        }
        soma = soma + digitos;
        if(devedobrar == 0){
            devedobrar = 1;
        }else {
            devedobrar = 0;
        }
    }
    if(soma %10 == 0 ){
        printf("Cartao valido!\n");
    }else{
        printf("Cartao invalido!\n");

    }
    return 0;

}