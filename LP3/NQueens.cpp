//Assignment 5
//Design n-Queens matrix having first Queen placed. Use backtracking to place remaining Queens to generate the final n-queens matrix.
//TC: O(n!), SC: O(n^2)

#include<bits/stdc++.h>
# define n 8
using namespace std;

void printboard(int board[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool isvalid(int board[n][n], int row, int col)
{
    for(int i=0;i<col;i++)
    {
        if(board[row][i]==1) //queen present horizontally
        {
            return false; 
        }
    }
    for(int i=row, j=col; i>=0 && j>=0; i--,j--)
    {
        if(board[i][j]==1) //queen present diagonally upwards
        {
            return false;
        }
    }
    for(int i=row, j=col; i<n && j>=0; i++,j--)
    {
        if(board[i][j]==1) //queen present diagonally downwards
        {
            return false;
        }
    }
    return true;
}
bool solve(int board[n][n], int col)
{
    if(col>=n)
        return true; //all queens placed
    
    for(int i=0; i<n; i++)  //row wise checking for placing queen
    {
        if(isvalid(board, i, col)==true) //possible to place in this row, column
        {
            board[i][col]=1;  
            //recursively check if possible to place in other columns
            if(solve(board, col+1)==true)
            {
                return true;
            }
            board[i][col]=0; //not possile to place in other columns if placed in this row , so , backtrack
        }
    }       
    return false;
}
void checksol()
{
    
    int board[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            board[i][j] = 0;
        }
    }
    if(solve(board, 0)==false)
    {
        cout << "Solution does not exist."<<endl;
        
    }
    //solution exists
    printboard(board);
}
int main()
{
    checksol();
    return 0;
}