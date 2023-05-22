#include<iostream>
using namespace std;

const int BOARD_SIZE = 9;

void displayboard(int board[BOARD_SIZE][BOARD_SIZE])
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void getplayerinput(int board[BOARD_SIZE][BOARD_SIZE])
{
	int row, col, value;

	cout << "Enter the coordinates of the cell (row and column): ";
	cin >> row >> col;

	cout << "Enter the value: ";
	cin >> value;

	board[row][col] = value;
}

bool isboardfull(int board[BOARD_SIZE][BOARD_SIZE])
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if (board[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{

	int board[BOARD_SIZE][BOARD_SIZE] = { 0 };

	displayboard(board);

	while (!isboardfull(board))
	{
		getplayerinput(board);
		displayboard(board);
	}
	cout << " Game is over. All cells are filled in" << endl;

	return 0;
}