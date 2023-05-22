
#include <iostream>
#include <vector>


using namespace std;

const int SIZE = 9; 


struct SudokuGrid {
    int cells[SIZE][SIZE];
};


void displayGrid(const SudokuGrid& grid) {
    for (int i = 0; i < SIZE; ++i) {
        if (i % 3 == 0 && i != 0) {
            cout << "---------------------" << endl;
        }
        for (int j = 0; j < SIZE; ++j) {
            if (j % 3 == 0 && j != 0) {
                cout << "| ";
            }
            cout << grid.cells[i][j] << " ";
        }
        cout << endl;
    }
}


int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}


bool isValidValue(const SudokuGrid& grid, int row, int col, int value) {
    
    for (int i = 0; i < SIZE; ++i) {
        if (grid.cells[row][i] == value || grid.cells[i][col] == value) {
            return false;
        }
    }

    
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = startRow; i < startRow + 3; ++i) {
        for (int j = startCol; j < startCol + 3; ++j) {
            if (grid.cells[i][j] == value) {
                return false;
            }
        }
    }

    return true;
}


void generateGrid(SudokuGrid& grid) {
    
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            grid.cells[i][j] = 0;
        }
    }

    
    srand(static_cast<unsigned int>(time(0))); 
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (rand() % 4 == 0) { 
                int value = getRandomNumber(1, 9);
                if (isValidValue(grid, i, j, value)) {
                    grid.cells[i][j] = value;
                }
            }
        }
    }
}

int main() {
    SudokuGrid grid;
    generateGrid(grid);
    displayGrid(grid);

    return 0;
}

