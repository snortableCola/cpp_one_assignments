#include <iostream>
#include "../include/user_solver.h"
#include "../include/guesser.h"

void UserSolver::solve(Board &board) 
{
    // Your Implementation goes here
    for (int row = 0; row < board.size(); ++row) 
    {
        for (int col = 0; col < board.size(); ++col) 
        {
            ReturnType t = guess(row, col, board);
            if (t == ReturnType::hit || t == ReturnType::near_miss) 
            {
                for (int i = -1; i <= 1; ++i) 
                {
                    for (int j = -1; j <= 1; ++j) 
                    {
                        if (i == 0 && j == 0) continue; 
                        int newRow = row + i;
                        int newCol = col + j;
                        if (newRow >= 0 && newRow < board.size() && newCol >= 0 && newCol < board.size()) 
                        {
                            guess(newRow, newCol, board);
                        }
                    }
                }
            }
        }
    }
    
}
