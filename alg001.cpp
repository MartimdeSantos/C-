#include <iostream>
using namespace std;

//variaveis
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
char turno = 'X';

void game_acabou(){
    cout << "fim do jogo";
}

bool vitoria(){
    if (square[0] == 'X' && square[2] == 'X' && square[3] == 'X'){
        game_acabou();
        return false;
    }
    else if (square[0] == 'X' && square[4] == 'X' && square[7] == 'X'){
        game_acabou();
        return false;
    }
    else if (square[3] == 'X' && square[6] == 'X' && square[9] == 'X'){
        game_acabou();
        return false;
    }
    else if (square[7] == 'X' && square[8] == 'X' && square[9] == 'X'){
        game_acabou();
        return false;
    }
    else if (square[5] == 'X' && square[6] == 'X' && square[7] == 'X'){
        game_acabou();
        return false;
    }
    else if (square[2] == 'X' && square[5] == 'X' && square[8] == 'X'){
        game_acabou();
        return false;
    }
    // OOOOOO
    else if (square[0] == 'O' && square[2] == 'O' && square[3] == 'O'){
        game_acabou();
        return false;
    }
    else if (square[0] == 'O' && square[4] == 'O' && square[7] == 'O'){
        game_acabou();
        return false;
    }
    else if (square[3] == 'O' && square[6] == 'O' && square[9] == 'O'){
        game_acabou();
        return false;
    }
    else if (square[7] == 'O' && square[8] == 'O' && square[9] == 'O'){
        game_acabou();
        return false;
    }
    else if (square[5] == 'O' && square[6] == 'O' && square[7] == 'O'){
        game_acabou();
        return false;
    }
    else if (square[2] == 'O' && square[5] == 'O' && square[8] == 'O'){
        game_acabou();
        return false;
    }
    return true;
}

bool ocupado(char chekar){
    if(square[int(chekar)]=='X' or 'O'){
        return true;
    }
    else{
        return false;
    }
}

void jogar(){
    char escolha;
    cout << "Escolhe o numero do quadrado: ";
    cin >> escolha;
    

    for (int i=0; i<=9; i++){
        if(square[i]== escolha){
            square[i] = turno;
        }
    }
}

void display_board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

void troca_turno(){
    if (turno == 'X'){
        turno = 'O';
    }
    else{
        turno = 'X';
    }
}


void jogo_completo(){
    while(vitoria()){
        display_board();
        jogar();
        troca_turno();
    }
    cout << "Acabou o jogo!";
}



int main(){
    jogo_completo();
    display_board();
    return 0;
}