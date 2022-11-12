#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool checkWin(char pos[3][3]){
    int nCondition = 1;

    switch(nCondition){
        case 1: //tudo igual por linhas
                if(pos[0][0] == pos[0][1] && pos[0][0] != ' ' && pos[0][1] != ' '){
                    if(pos[0][1] == pos[0][2] && pos[0][1] != ' ' && pos[0][2] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

                if(pos[1][0] == pos[1][1] && pos[1][0] != ' ' && pos[1][1] != ' '){
                    if(pos[1][1] == pos[1][2] && pos[1][1] != ' ' && pos[1][2] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

                if(pos[2][0] == pos[2][1] && pos[2][0] != ' ' && pos[2][1] != ' '){
                    if(pos[2][1] == pos[2][2] && pos[2][1] != ' ' && pos[2][2] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

        case 2: //tudo igual por colunas
                if(pos[0][0] == pos[1][0] && pos[0][0] != ' ' && pos[1][0] != ' '){
                    if(pos[1][0] == pos[2][0] && pos[1][0] != ' ' && pos[2][0] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

                if(pos[0][1] == pos[1][1] && pos[0][1] != ' ' && pos[1][1] != ' '){
                    if(pos[1][1] == pos[2][1] && pos[1][1] != ' ' && pos[2][1] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

                if(pos[0][2] == pos[1][2] && pos[0][2] != ' ' && pos[1][1] != ' '){
                    if(pos[1][2] == pos[2][2] && pos[1][2] != ' ' && pos[2][2] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

        case 3: //tudo igual diagonais
                if(pos[0][0] == pos[1][1] && pos[0][0] != ' ' && pos[1][1] != ' '){
                    if(pos[1][1] == pos[2][2] && pos[1][1] != ' ' && pos[2][2] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

                if(pos[0][2] == pos[1][1] && pos[0][2] != ' ' && pos[1][1] != ' '){
                    if(pos[1][1] == pos[3][1] && pos[1][1] != ' ' && pos[3][1] != ' '){
                        printf("\n\nGANHOU!!!!!!\n\n");
                        return true;
                    }
                }

        default: return false;
    }
}

void board(int l, int c, char pos[3][3]){

    for(int j = 0; j < l; j++){
        printf("\n");
        for(int i = 0; i < c; i++){
            printf(" ---");
        }
        printf("\n");
        printf("|   ");
        for(int i = 0; i < c; i++){
            printf("|   ");
        }
        printf("\n");
        printf("| %c ", pos[j][0]);
        for(int i = 1; i < c; i++){
            printf("| %c ", pos[j][i]);
            
        }

        printf("\n");
        printf("|   ");
        for(int i = 0; i < c; i++){
            printf("|   ");
        }
    }

    printf("\n");
    for(int i = 0; i < c; i++){
        printf(" ---");
    }
}

int main(int argc, char **argv){

    //char pos[3][3] = {{}};
    int l, c;
    char pos[3][3] = {{' ', ' ', ' '},
                    {' ', ' ', ' '},
                    {' ', ' ', ' '}};

    char firstPlayer = 'X';
    char player = firstPlayer;
    int nMoves = 0;
    srand(time(NULL));   // Initialization, should only be called once.
    int r = rand() % 1;

    while(nMoves < 9){
        if(nMoves == 0){
            if(r == 1){
                firstPlayer = 'O';
                player = firstPlayer;
            }
            printf("O primeiro jogador é o %c\n\n", firstPlayer);
        }

        switch(nMoves){
            case 0:
                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 1:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';

                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 2:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';

                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 3:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';

                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 4:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';
            
                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 5:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';

                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 6:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';

                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 7:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';

                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);

                    
                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
            case 8:

                    if(player == 'X')
                        player = 'O';
                    else
                        player = 'X';

                    printf("\n\nEm que posicao pretende jogar? JOGADOR: %c  ", player);
                    scanf(" %d %d", &l , &c);


                    pos[l - 1][c - 1] = player;
            
                    board(3, 3, pos);
                    if(checkWin(pos) == true)
                        return 0;
                    nMoves++;
                    
                    
        }
    }

    return 0;
}