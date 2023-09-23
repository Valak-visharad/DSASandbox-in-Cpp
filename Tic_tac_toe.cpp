#include<iostream>
using namespace std;

const int X = 1, O = -1, zero = 0;

void ClearBoard(int *board, int *currentplayer)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            *(board + 3 * i + j) = zero;
        }
    }
    *currentplayer = O;
}

void PutMark(int i, int j,  int *board, int *currentplayer)
{
    *(board + 3 * i + j) = *currentplayer;
    *currentplayer = -1 * *currentplayer;
}

bool IsWin(int mark, int *board)
{
    int win = 3 * mark;
    for(int i = 0; i < 3; i++)
    {
        int twin = 0;
        for(int j = 0; j < 3; j++)
        {
            twin += *(board + 3 * i + j);
        }
        if (twin == win)
            return 1;
    }
    return 0;
}

int GetWinner(int *board)
{
    if(IsWin(X, board)) return X;
    else if(IsWin(O, board)) return O;
    return zero;
}

void PrintBoard(int *board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int c = *(board + 3 * i + j);
            if(c == X) cout<<"X";
            else if(c == O) cout<<"O";
            else cout<<" ";
            if (j < 2)
                cout<<" | ";
        }    
        if (i < 2)
            cout<<"\n---+---+---\n";
    }
}

int main()
{
    int board[3][3], *currentplayer;

    ClearBoard(&board[0][0], currentplayer);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            PutMark(i, j, &board[0][0], currentplayer);
        }
    }
    PrintBoard(&board[0][0]);
    int winner = GetWinner(&board[0][0]);
    if (winner != zero)
        cout<<"\n"<<(winner == O?"O":"X")<<" Won !";
    else
        cout<<"\nTie";

    return 0;
}