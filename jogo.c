#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, ""); //Permite a inclus�o de caracteres com acentos

    const char *jogo[] = {"Pedra","Papel","Tesoura"}; //Array com as op��es de armas
    int min = 0; // Valor M�nimo
    int max = 2; // Valor M�ximo
    int choice; //Guarda a op��o do usu�rio
    int resultado_scan; // Armazena o retorno do scanf

    srand(time(0)); // Inicializa o gerador de n�meros aleat�rios
    int random = (rand() % (max - min + 1)) + min; //Gera um n�mero aleat�rio de 0 � 2

    do
    {
        printf("Escolha sua arma:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("0 - Sair\n");
        resultado_scan = scanf("%d", &choice); //Jogador escolhe sua arma

        // Se o usu�rio digitou algo que n�o � n�mero (scanf retorna 0)
        if (resultado_scan != 1) {
            system("cls"); //Limpa a tela para n�o mostrar o menu v�rias vezes
            printf("Erro: Digite apenas n�meros!\n");
            // Limpa o buffer de entrada para evitar loop infinito
            while (getchar() != '\n'); // Descarta todos os caracteres inv�lidos
            continue; // Volta para o in�cio do loop
        }

        switch (choice) //Verifica a op��o que o usu�rio escolheu, e compara com os case, se houver uma correspond�ncia, o bloco de c�digo associado ser� executado
        {
        case 1: // Se o usu�rio escolher 1, executa o bloco de c�digo abaixo
            printf("Pedra!\n");
            printf("%s\n", jogo[random]);

            if (jogo[random] == jogo[0]) //Se o computador escolher Pedra tamb�m, o jogo d� velha
            {
                printf("Velha...\n");
            }
            else if (jogo[random] == jogo[1]) //Se o computador escolher Papel, voc� perde
            {
                printf("Voc� Perdeu...\n");
            }
            else if (jogo[random] == jogo[2]) //Se o computador escolher Tesoura, voc� ganha
            {
                printf("VOC� GANHOU!!!\n");
            }
            break;
        case 2: // Se o usu�rio escolher 2, executa o bloco de c�digo abaixo
            printf("Papel!\n");
            printf("%s\n", jogo[random]);

            if (jogo[random] == jogo[0]) //Se o computador escolher Pedra, voc� ganha
            {
                printf("VOC� GANHOU!!!\n");
            }
            else if (jogo[random] == jogo[1]) //Se o computador escolher Papel tamb�m, o jogo d� velha
            {
                printf("Velha...\n");
            }
            else if (jogo[random] == jogo[2]) //Se o computador escolher Tesoura, voc� perde
            {
                printf("Voc� Perdeu...\n");
            }
            break;
        case 3: // Se o usu�rio escolher 3, executa o bloco de c�digo abaixo
            printf("Tesoura!\n");
            printf("%s\n", jogo[random]);

            if (jogo[random] == jogo[0]) //Se o computador escolher Pedra, voc� perde
            {
                printf("Voc� Perdeu...\n");
            }
            else if (jogo[random] == jogo[1]) //Se o computador escolher Papel, voc� ganha
            {
                printf("VOC� GANHOU!!!\n");
            }
            else if (jogo[random] == jogo[2]) //Se o computador escolher Tesoura tamb�m, o jogo d� velha;
            {
                printf("Velha...\n");
            }
            break;
        case 0:
            printf("Saindo...\n");
            return 0;
            break;
        default: //Se o usu�rio digitar um n�mero fora das op��es, aparece a mensagem de "Op��o Inv�lida"
            system("cls"); //Limpa a tela para n�o mostrar o menu v�rias vezes
            printf("Op��o inv�lida, Tente novamente.\n");
            break;
        }
    } while (choice < 1 || choice > 3); // Repete at� o usu�rio digitar 1, 2 ou 3

    return 0;
}
