#include <iostream>
using namespace std;

// variaveis
char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char turno = 'X';

void game_acabou()
{
    cout << "fim do jogo" << endl;
}

bool vitoria()
{
    char jogador[2] = {'X', 'O'};

    for (int i = 0; i < 2; ++i)
    {
        // linhas
        if (square[1] == jogador[i] && square[2] == jogador[i] && square[3] == jogador[i])
        {
            game_acabou();
            return true;
        }
        if (square[4] == jogador[i] && square[5] == jogador[i] && square[6] == jogador[i])
        {
            game_acabou();
            return true;
        }
        if (square[7] == jogador[i] && square[8] == jogador[i] && square[9] == jogador[i])
        {
            game_acabou();
            return true;
        }
        // colunas
        if (square[1] == jogador[i] && square[4] == jogador[i] && square[7] == jogador[i])
        {
            game_acabou();
            return true;
        }
        if (square[2] == jogador[i] && square[5] == jogador[i] && square[8] == jogador[i])
        {
            game_acabou();
            return true;
        }
        if (square[3] == jogador[i] && square[6] == jogador[i] && square[9] == jogador[i])
        {
            game_acabou();
            return true;
        }
        // diagonais
        if (square[1] == jogador[i] && square[5] == jogador[i] && square[9] == jogador[i])
        {
            game_acabou();
            return true;
        }
        if (square[3] == jogador[i] && square[5] == jogador[i] && square[7] == jogador[i])
        {
            game_acabou();
            return true;
        }
    }
    return false;
}

bool ocupado(char chekar)
{
    if (square[int(chekar)] == 'X' or 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void jogar()
{
    char escolha;
    cout << "Escolhe o numero do quadrado: ";
    cin >> escolha;

    for (int i = 0; i <= 9; i++)
    {
        if (square[i] == escolha)
        {
            square[i] = turno;
        }
    }
}

void display_board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl
         << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl
         << endl;
}

void troca_turno()
{
    if (turno == 'X')
    {
        turno = 'O';
    }
    else
    {
        turno = 'X';
    }
}

void jogo_completo()
{
    while (!vitoria())
    {
        display_board();
        jogar();
        troca_turno();
    }
    cout << "Acabou o jogo!" << endl;
}

int main()
{
    jogo_completo();
    display_board();
    cout << "O jogo acabou, o jogador " << turno << " ganhou, parabéns!";
    return 0;
}
