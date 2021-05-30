#include <stdio.h>
#include <stdlib.h>


int main(){
    int opc, i=0, a, b, c;
    float soma=0;
    char escolhido = 's';

struct vaca{
    int codv;
    char nome[30];
    float litros;
} vaquinha[9999];

    do{
        printf ("\n Menu da vaquinha leiteira \n 1 - se a vaca esteja dando leite  \n 2 - se a vaca esteja prenha \n 3 - se o bezerro ja tenha nascido \n 4 - sair \n");
        scanf ("%d", &opc);

        switch (opc){
            case 1:

                while(escolhido == 's') {
                    printf ("\n Digite o codigo da vaca: ");
                    scanf ("%d", &vaquinha[i].codv);
                    printf ("Digite o nome da vaca: ");
                    scanf ("%s", &vaquinha[i].nome);
                    printf ("Digite a quantidade de leite que a vaca esta produzindo: ");
                    scanf ("%f", &vaquinha[i].litros);

                    printf ("Escreve 's' para informar a proxima vaca: \n\n");
                    scanf ("%s", &escolhido);
                    i++;


                    if ( i == 9999 || escolhido != 's'){
                        escolhido = 's';
                        break;
                    }

                }
        break;

            case 2:
                while (escolhido == 's') {
                    printf ("\n Digite o nome da vaca: ");
                    scanf ("%s", &vaquinha[i].nome);
                    printf ("Ela ja chegou no seu ultimo terco da gravidez: \n Digite 0 se nao \n Digite 1 para sim \n Digite sua opcao: ");
                    scanf ("%d", &a);
                    if (a == 0) {
                        printf ("Ela poderá continuar produzindo leite normalmente \n");
                    }
                    else if (a == 1){
                        printf ("O senhor tera que esperar o bezerro nascer para poder produzir leite com essa vaca novamente \n");
                    }

                    printf ("Escreve 's' para informar a proxima vaca: ");
                    scanf ("%s", &escolhido);
                    i++;

                    if (escolhido != 's'){
                        escolhido = 's';
                        break;
                    }

                }
            break;

        case 3:

            while (escolhido == 's') {
                printf("Digite o codigo da vaca que teve o bezerro: ");
                scanf("%d", &vaquinha[i].codv);
                printf ("O bezerro que nasceu eh macho ou femea: \n Digite 0 para macho \n Digite 1 para femea \n");
                scanf ("%d", &b);
                if (b == 0){
                    printf ("Deseja vender o bezerro? : \n Digite 0 para sim \n Digite 1 para nao \n ");
                        scanf ("%d", &c);
                            if (c == 0) {
                                    printf("Espere de 60-90 dias para desmamar e depois venda-o \n");
                            }
                            else if (c == 1) {
                                    printf("Espere de 60-90 dias para desmamar e depois faça o que bem entender \n");
                            }
                }
                else if (b == 1) {
                    printf("Espere de 60-90 dias para desmamar e espere pelo menos 15 meses para transforma-la em vaca leiteira \n");
                }
                 printf ("Escreve 's' para informar a proxima vaca: ");
                    scanf ("%s", &escolhido);
                    i++;

                    if (escolhido != 's'){
                        escolhido = 's';
                        break;
                    }
            }
            break;

        case 4:
            return 0;
            break;
}
            } while (1);
                return 0;
}
