#include <iostream>

const char SUDOKU_SIZE = 9;

void PrintMatrix(const char matrix[SUDOKU_SIZE][SUDOKU_SIZE]){
    std::cout << "------------------------------------";
    for (size_t i = 0; i < SUDOKU_SIZE; i++)
    {
        for (size_t j = 0; j < SUDOKU_SIZE; j++)
        {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << "------------------------------------";
}

void SolveSudoku(char matrix[SUDOKU_SIZE][SUDOKU_SIZE]){
    for (size_t i = 0; i < SUDOKU_SIZE; i++)
    {
        for (size_t j = 0; j < SUDOKU_SIZE; j++)
        {

        }
    }
}

void SolveLine(char matrix[SUDOKU_SIZE][SUDOKU_SIZE], unsigned i, unsigned j){ //returns invalid values in line

}

void SolveRow(char matrix[SUDOKU_SIZE][SUDOKU_SIZE], unsigned i, unsigned j){//returns invalid values in row

}

void SolveSquare(char matrix[SUDOKU_SIZE][SUDOKU_SIZE], unsigned i, unsigned j){//returns invalid values in square

}

int main(){
    char matrix[SUDOKU_SIZE][SUDOKU_SIZE];
    for (size_t i = 0; i < SUDOKU_SIZE; i++)
    {
        for (size_t j = 0; j < SUDOKU_SIZE; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    PrintMatrix(matrix);
    return 0;
};