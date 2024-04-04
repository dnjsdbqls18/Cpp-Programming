#include <iostream>
#include "TicTacToe.h"
using namespace std;

char TicTacToe::checkWinner(char board[3][3])
{
    for (int i = 0; i < 3; i++) 
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }

    return ' ';
}

void TicTacToe::playGame() 
{
    char board[3][3];
    int x, y, k, i;
    char currentPlayer;

    for (x = 0; x < 3; x++) 
    {
        for (y = 0; y < 3; y++)
        {
            board[x][y] = ' ';
        }
    }

    for (k = 0; k < 9; k++)
    {
        currentPlayer = (k % 2 == 0) ? '1' : '2';

        bool validInput = false;

        while (!validInput)
        {
            cout << "Player " << currentPlayer << "의 좌표: ";
            cin >> x >> y;

            if (board[x][y] == ' ')
            {
                validInput = true;
                board[x][y] = (currentPlayer == '1') ? 'X' : 'O';

                char winner = checkWinner(board);
                if (winner != ' ')
                {
                    cout << "Player " << currentPlayer << "가 이겼습니다!" << endl;
                    return;
                }
            }

            else 
            {
                cout << "이미 입력된 위치입니다. 다른 위치를 선택하세요." << endl;
            }
        }

        for (i = 0; i < 3; i++)
        {
            cout << "---|---|---" << endl;
            cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
        }
        cout << "---|---|---" << endl;
    }

    cout << "무승부입니다!" << endl;
}
