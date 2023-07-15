#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{

    int i,j, matriz[2][2], det;
    int inversa[2][2];
    char msg[200];
    int msg_numerica[200];
    int coluna;
    int matriz_num[2][200];
    int fim_mat = 0;
    int resultado[2][200];
    char msg_decodif[200];
    int mat_cod[2][200];
    int tam_msg;
    int novo_vetor[200];

    int op;

    printf("MENU: \n");
    printf("1. Gerar A e sua inversa; \n");
    printf("2. Ler mensagem e codificar;\n");
    printf("3. Imprimir mensagem codificada; \n");
    printf("4. Decodificar e imprimir mensagem decodificada; \n");

    printf("\n");

    do
    {

        printf("Entre com uma opcao: \n");
        scanf("%d%*c",&op);

        switch (op)
        {


        //gerar A e sua inversa
        case 1:
            srand(time(NULL));
            //inicia uma nova semente
            det=0;

            printf("A matriz aleatoria: \n");

            while( det!= 1 && det != -1)//determinante 1 e -1 para a garantia de que seja inteiro
            {

                for(i = 0; i<2; i++)
                {
                    for (j = 0; j<2; j++)
                    {
                        matriz[i][j] = rand()%50;
                        //rand %50 - valores aleatórios entre 0 e 50.
                    }
                }
                det = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
            }

            for(i = 0; i<2; i++)
            {
                for (j = 0; j<2; j++)
                {
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }
            /* printf("O det eh: %d \n", det);*/

            inversa[0][0]= matriz[1][1]/det;//ex: qualquer valor dividido por 1 ou -1 será inteiro
            inversa[0][1]= -matriz[0][1]/det;
            inversa[1][0]= -matriz[1][0]/det;
            inversa[1][1]= matriz[0][0]/det;

            printf("A inversa: \n");

            for(i = 0; i<2; i++)
            {
                for (j = 0; j<2; j++)
                {
                    printf("%d ", inversa[i][j]);
                }
                printf("\n");
            }
            break;
        //Ler mensagem e codificar
        case 2:


            printf("Digite a mensagem: ");
            scanf("%s%*c", msg);
            printf("A mensagem digitada: %s ",msg);
            printf("\n");


            tam_msg = strlen(msg);//retorna o tam da String


            for (i = 0; i<tam_msg; i++)
            {
                if (msg[i] == 'a' || msg[i] == 'A')
                {
                    msg_numerica[i] = 1;
                }
                else if(msg[i] == 'b'|| msg[i] == 'B')
                {
                    msg_numerica[i] = 2;
                }
                else if(msg[i] == 'c'|| msg[i] == 'C')
                {
                    msg_numerica[i] = 3;
                }
                else if(msg[i] == 'd'|| msg[i] == 'D')
                {
                    msg_numerica[i] = 4;
                }
                else if(msg[i] == 'e'|| msg[i] == 'E')
                {
                    msg_numerica[i] = 5;
                }
                else if(msg[i] == 'f'|| msg[i] == 'F')
                {
                    msg_numerica[i] = 6;
                }
                else if(msg[i] == 'g'|| msg[i] == 'G')
                {
                    msg_numerica[i] = 7;
                }
                else if(msg[i] == 'h'|| msg[i] == 'H')
                {
                    msg_numerica[i] = 8;
                }
                else if(msg[i] == 'i'|| msg[i] == 'I')
                {
                    msg_numerica[i] = 9;
                }
                else if(msg[i] == 'j'|| msg[i] == 'J')
                {
                    msg_numerica[i] = 10;
                }
                else if(msg[i] == 'k'|| msg[i] == 'K')
                {
                    msg_numerica[i] = 11;
                }
                else if(msg[i] == 'l'|| msg[i] == 'L')
                {
                    msg_numerica[i] = 12;
                }
                else if(msg[i] == 'm'|| msg[i] == 'M')
                {
                    msg_numerica[i] = 13;
                }
                else if(msg[i] == 'n'|| msg[i] == 'N')
                {
                    msg_numerica[i] = 14;
                }
                else if(msg[i] == 'o'|| msg[i] == 'O')
                {
                    msg_numerica[i] = 15;
                }
                else if(msg[i] == 'p'|| msg[i] == 'P')
                {
                    msg_numerica[i] = 16;
                }
                else if(msg[i] == 'q'|| msg[i] == 'Q')
                {
                    msg_numerica[i] = 17;
                }
                else if(msg[i] == 'r'|| msg[i] == 'R')
                {
                    msg_numerica[i] = 18;
                }
                else if(msg[i] == 's'|| msg[i] == 'S')
                {
                    msg_numerica[i] = 19;
                }
                else if(msg[i] == 't'|| msg[i] == 'T')
                {
                    msg_numerica[i] = 20;
                }
                else if(msg[i] == 'u'|| msg[i] == 'U')
                {
                    msg_numerica[i] = 21;
                }
                else if(msg[i] == 'v'|| msg[i] == 'V')
                {
                    msg_numerica[i] = 22;
                }
                else if(msg[i] == 'w'|| msg[i] == 'W')
                {
                    msg_numerica[i] = 23;
                }
                else if(msg[i] == 'x'|| msg[i] == 'X')
                {
                    msg_numerica[i] = 24;
                }
                else if(msg[i] == 'y'|| msg[i] == 'Y')
                {
                    msg_numerica[i] = 25;
                }
                else if(msg[i] == 'z'|| msg[i] == 'Z')
                {
                    msg_numerica[i] = 26;
                }
                else if(msg[i] == '.')
                {
                    msg_numerica[i] = 27;
                }
                else if(msg[i] == ',')
                {
                    msg_numerica[i] = 28;
                }
                else if(msg[i] == '#')
                {
                    msg_numerica[i] = 29;
                }
            }
            break;

        //Imprimir a mensagem codificada
        case 3:
            printf("\nA mensagem codificada: \n");

            for (int i = 0; i<tam_msg; i++)
            {
                printf("%d ", msg_numerica[i]);
            }
            printf("\n");

            break;

        //Decodificar e imprimir a mensagem decodificada
        case 4:

            printf("\n");


            if(tam_msg %2 == 0)
            {
                coluna = tam_msg/2;//tamanho de caracteres da mensagem / 2
            }
            else
            {
                fim_mat = 1;
                tam_msg = tam_msg + 1;
                coluna = tam_msg/2;
            }

            /*  printf("Tamanho: %d | Colunas: %d",tam_msg, coluna);*/

            int k =0;

            for (i = 0; i<2; i++)
            {
                for(j = 0; j<coluna; j++)
                {
                    //transformando matriz em vetor
                    matriz_num[i][j] = msg_numerica[k];
                    k++;
                }
            }


            if(fim_mat == 1)
            {
                matriz_num [i-1][j-1] = 29;
                //pegar a ultima posição vazia e preencher com #, para valores ímpares
            }

            for (i = 0; i<2; i++)
            {
                for(j = 0; j<coluna; j++)
                {
                    /*printf(" %d", matriz_num[i][j]);*/
                }

            }

            for(i = 0; i < 2; i++)
            {
                for(j = 0; j < coluna; j++)
                {
                    mat_cod[i][j] = 0;
                    for(k = 0; k < 2; k++)
                    {
                        mat_cod[i][j] = mat_cod[i][j]+matriz_num[k][j] * matriz[i][k];

                    }
                }
            }

            for(i = 0; i<2; i++)
            {
                for (j = 0; j<coluna; j++)
                {
                    /* printf("%d ", mat_cod[i][j]);*/
                }

            }

            for (i = 0; i < 2; i++)
            {
                for(j = 0; j < coluna; j++)
                {
                    resultado[i][j] = 0;
                    for(k = 0; k < 2; k++)
                    {
                        resultado[i][j] += mat_cod[k][j] * inversa[i][k];//para converter a matriz codificada em texto
                        //criação de uma nova variável que recebe a soma dela com a matriz codificada e multiplica a inversa

                    }
                }
            }
            for(i = 0; i<2; i++)
            {
                for (j = 0; j<coluna; j++)
                {
                    printf(" %d ", resultado[i][j]);
                }
                printf("\n");
            }


            int s =0;

            for (i = 0; i<2; i++)
            {
                for(j = 0; j<coluna; j++)
                {
                    //transformando a matriz em vetor
                    novo_vetor[s] = resultado[i][j];
                    s++;
                }
            }

            for (i = 0; i<tam_msg; i++)
            {

                if (novo_vetor[i] == 1)
                {
                    msg_decodif[i] = 'A';
                }
                else if(novo_vetor[i] == 2)
                {
                    msg_decodif[i] = 'B';
                }
                else if(novo_vetor[i] == 3)
                {
                    msg_decodif[i] = 'C';
                }
                else if(novo_vetor[i] == 4)
                {
                    msg_decodif[i] = 'D';
                }
                else if(novo_vetor[i] == 5)
                {
                    msg_decodif[i] = 'E';
                }
                else if(novo_vetor[i] == 6)
                {
                    msg_decodif[i] = 'F';
                }
                else if(novo_vetor[i] == 7)
                {
                    msg_decodif[i] = 'G';
                }
                else if(novo_vetor[i] == 8)
                {
                    msg_decodif[i] = 'H';
                }
                else if(novo_vetor[i] == 9)
                {
                    msg_decodif[i] = 'I';
                }
                else if(novo_vetor[i] == 10)
                {
                    msg_decodif[i] = 'J';
                }
                else if(novo_vetor[i] == 11)
                {
                    msg_decodif[i] = 'K';
                }
                else if(novo_vetor[i] == 12)
                {
                    msg_decodif[i] ='L';
                }
                else if(novo_vetor[i] == 13)
                {
                    msg_decodif[i] = 'M';
                }
                else if(novo_vetor[i] == 14)
                {
                    msg_decodif[i] = 'N';
                }
                else if(novo_vetor[i] == 15)
                {
                    msg_decodif[i] ='O';
                }
                else if(novo_vetor[i] == 16)
                {
                    msg_decodif[i] = 'P';
                }
                else if(novo_vetor[i] == 17)
                {
                    msg_decodif[i] = 'Q';
                }
                else if(novo_vetor[i] == 18)
                {
                    msg_decodif[i] =  'R';
                }
                else if(novo_vetor[i] == 19)
                {
                    msg_decodif[i] = 'S';
                }
                else if(novo_vetor[i] == 20)
                {
                    msg_decodif[i] = 'T';
                }
                else if(novo_vetor[i] == 21)
                {
                    msg_decodif[i] = 'U';
                }
                else if(novo_vetor[i] == 22)
                {
                    msg_decodif[i] = 'V';
                }
                else if(novo_vetor[i] == 23)
                {
                    msg_decodif[i] ='W';
                }
                else if(novo_vetor[i] == 24)
                {
                    msg_decodif[i] ='X';
                }
                else if(novo_vetor[i] == 25)
                {
                    msg_decodif[i] ='Y';
                }
                else if(novo_vetor[i] == 26)
                {
                    msg_decodif[i] = 'Z';
                }
                else if(novo_vetor[i] == 27)
                {
                    msg_decodif[i] = '.';
                }
                else if(novo_vetor[i] == 28)
                {
                    msg_decodif[i] = ',';
                }
                else if(novo_vetor[i] == 29)
                {
                    msg_decodif[i] = '#';
                }
            }
            printf("\n");

            printf("A mensagem decodificada: \n");

            for (int i = 0; i<tam_msg; i++)
            {
                printf("%c ", msg_decodif[i]);
            }
            printf("\n");
            break;


        default:
            printf("\n INVALIDO!!!!");
            break;

        }

    }
    while(op<5);

    return 0;

}











