#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, ""); //Permite a inclusão de caracteres com acentos

    const char *jogo[] = {"Pedra","Papel","Tesoura"}; //Array com as opções de armas
    int min = 0; // Valor Mínimo
    int max = 2; // Valor Máximo
    int choice; //Guarda a opção do usuário
    int resultado_scan; // Armazena o retorno do scanf

    srand(time(0)); // Inicializa o gerador de números aleatórios
    int random = (rand() % (max - min + 1)) + min; //Gera um número aleatório de 0 á 2

    do
    {
        printf("Escolha sua arma:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("0 - Sair\n");
        resultado_scan = scanf("%d", &choice); //Jogador escolhe sua arma

        // Se o usuário digitou algo que não é número (scanf retorna 0)
        if (resultado_scan != 1) {
            system("cls"); //Limpa a tela para não mostrar o menu várias vezes
            printf("Erro: Digite apenas números!\n");
            // Limpa o buffer de entrada para evitar loop infinito
            while (getchar() != '\n'); // Descarta todos os caracteres inválidos
            continue; // Volta para o início do loop
        }

        switch (choice) //Verifica a opção que o usuário escolheu, e compara com os case, se houver uma correspondência, o bloco de código associado será executado
        {
        case 1: // Se o usuário escolher 1, executa o bloco de código abaixo
            printf("Pedra!\n");
            printf("%s\n", jogo[random]);

            if (jogo[random] == jogo[0]) //Se o computador escolher Pedra também, o jogo dá velha
            {
                printf("Velha...\n");
            }
            else if (jogo[random] == jogo[1]) //Se o computador escolher Papel, você perde
            {
                printf("Você Perdeu...\n");
            }
            else if (jogo[random] == jogo[2]) //Se o computador escolher Tesoura, você ganha
            {
                printf("VOCÊ GANHOU!!!\n");
            }
            break;
        case 2: // Se o usuário escolher 2, executa o bloco de código abaixo
            printf("Papel!\n");
            printf("%s\n", jogo[random]);

            if (jogo[random] == jogo[0]) //Se o computador escolher Pedra, você ganha
            {
                printf("VOCÊ GANHOU!!!\n");
            }
            else if (jogo[random] == jogo[1]) //Se o computador escolher Papel também, o jogo dá velha
            {
                printf("Velha...\n");
            }
            else if (jogo[random] == jogo[2]) //Se o computador escolher Tesoura, você perde
            {
                printf("Você Perdeu...\n");
            }
            break;
        case 3: // Se o usuário escolher 3, executa o bloco de código abaixo
            printf("Tesoura!\n");
            printf("%s\n", jogo[random]);

            if (jogo[random] == jogo[0]) //Se o computador escolher Pedra, você perde
            {
                printf("Você Perdeu...\n");
            }
            else if (jogo[random] == jogo[1]) //Se o computador escolher Papel, você ganha
            {
                printf("VOCÊ GANHOU!!!\n");
            }
            else if (jogo[random] == jogo[2]) //Se o computador escolher Tesoura também, o jogo dá velha;
            {
                printf("Velha...\n");
            }
            break;
        case 0:
            printf("Saindo...\n");
            return 0;
            break;
        default: //Se o usuário digitar um número fora das opções, aparece a mensagem de "Opção Inválida"
            system("cls"); //Limpa a tela para não mostrar o menu várias vezes
            printf("Opção inválida, Tente novamente.\n");
            break;
        }
    } while (choice < 1 || choice > 3); // Repete até o usuário digitar 1, 2 ou 3

    return 0;
}
