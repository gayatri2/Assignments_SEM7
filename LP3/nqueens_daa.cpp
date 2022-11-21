#include <bits/stdc++.h>
using namespace std;
#define n 8

void printboard(int board[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool isValid(int board[n][n], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 1)
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
            return false;
    }
    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j] == 1)
            return false;
    }
    return true;
}
bool solve(int board[n][n], int col)
{
    if (col >= n)
    {
        return true; // all queens placed
    }
    for (int i = 0; i < n; i++) // check rows
    {
        if (isValid(board, i, col) == true)
        {
            board[i][col] = 1;
            // check other columns
            if (solve(board, col + 1) == true)
            {
                return true;
            }
            board[i][col] = 0;
        }
    }
    return false;
}
void checksol()
{
    int board[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }
    if (solve(board, 0) == false)
    {
        cout << "Solution doesnt exist." << endl;
    }
    printboard(board);
}
int main()
{
    checksol();
    return 0;
}