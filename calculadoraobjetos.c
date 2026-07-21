#include <stdio.h>
#include <math.h>

float quadrado (float lado){
    return lado * lado;
}

float triangulo (float base , float altura){
    return (base * altura)/2;
}

float retangulo ( float base , float altura){
    return base * altura;
}

float circulo ( float raio ){
    return 3.1415 *raio * raio;
}

int main (){
    int opcao;
    float a, b;

    printf("\n============== Calculadora =================");

     
    printf("\n by: bruh.\n");
    printf("1-- quadrado\n");
    printf("2-- triangulo (TRICAS KAKAKAAKAK)\n");
    printf("3-- retangulo\n");
    printf("4-- circuferencia\n");

    printf("Escolha: ");
    scanf("%d", &opcao);


    if ( opcao == 1){
        printf("Digite o lado: ");
        scanf("%f", &a);
        printf("Area = %2.f", quadrado(a));
    }
       else if ( opcao == 2){
        printf("Digite a base: ");
        scanf("%f", &a);
        printf("Digite a altura");
        scanf("%f", &b);

        printf("Area = %2.f", triangulo(a , b));

    }
      else if ( opcao == 3){
        printf("Digite a base: ");
        scanf("%f", &a);
        printf("Digite a altura");
        scanf("%f", &b);

        printf("Area = %2.f", retangulo(a , b));

    }
    
      else if ( opcao == 4){
        perror("Digite o raio: ");
        scanf("%f", &a);
        printf("AREA= %2.f", circulo(a));

}
else {
    printf("OPCAO INVALIDA !!");
}

return 0;
}
