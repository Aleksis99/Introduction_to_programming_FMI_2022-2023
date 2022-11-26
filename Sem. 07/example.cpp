#include <iostream>

using namespace std;

const int SIZE = 100;

void getBoardSize(int& size)
{
	cin >> size;
	while (size <= 2)
	{
		cout << "Please enter valid board size"<<endl;
		cin >> size;
	}
}

void getNumberOfPlayer(int& numPlayers)
{
	cin >> numPlayers;
	while (numPlayers < 2)
	{
		cout << "Please enter valid number of players" << endl;
		cin >> numPlayers;
	}
}

void printBoard(int board[][SIZE], int n) 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}



bool areCorrdsValid(int board[][SIZE], int n, int row,int col)
{
	return !(row < 0 || row >= n || col < 0 || col >= n || board[row][col] != 0);
}

void getPlayerInput(int playerNum, int board[][SIZE], int n)
{

	cout << playerNum << " player's turn"<<endl;
	int row, col;
	cin >> row >> col;

	while (!areCorrdsValid(board, n, row, col)) 
	{
		cout << "Enter valid coords";
		cin >> row >> col;
	}

	board[row][col] = playerNum;
}

bool isRowEqualValue(int row[], int n, int playerNum)
{
	for (int i = 0; i < n; i++)
	{
		if (row[i] != playerNum)
			return false;
	}

	return true;
}

bool isColEqualValue(int board[][SIZE], int n, int col, int playerNum)
{
	for (int i = 0; i < n; i++)
	{
		if (board[i][col] != playerNum)
			return false;
	}

	return true;
}

bool checkMainDiag(int board[][SIZE], int n, int playerNum)
{
	for (int i = 0; i < n; i++)
	{
		if (board[i][i] != playerNum)
			return false;
	}

	return true;
}

bool checkSeconDiag(int board[][SIZE], int n, int playerNum)
{
	for (int i = 0; i < n; i++)
	{
		if (board[i][n - i - 1] != playerNum)
			return false;
	}

	return true;
}

bool isPlayerAWinner(int board[][SIZE], int n, int playerNum)
{
	// check rows
	for (int i = 0; i < n; i++)
	{
		if (isRowEqualValue(board[i], n, playerNum))
			return true;
	}

	// check cols
	for (int i = 0; i < n; i++)
	{
		if (isColEqualValue(board, n, i, playerNum))
			return true;
	}

	// check main diag
	if (checkMainDiag(board, n, playerNum))
		return true;

	// check second diag
	return checkSeconDiag(board, n, playerNum);
}

int main()
{
	int board[SIZE][SIZE]{ 0 };

	int n;
	getBoardSize(n);

	int numberOfPlayers;
	getNumberOfPlayer(numberOfPlayers);

	int currentplayer = 1;
	int turn = 1;

	printBoard(board, n);

	while (true)
	{

		getPlayerInput(currentplayer, board, n);

		printBoard(board, n);

		if (isPlayerAWinner(board, n, currentplayer))
		{
			cout << "Player : " << currentplayer << " wins.";
			break;
		}

		currentplayer++;

		if (currentplayer == numberOfPlayers + 1)
			currentplayer = 1;

		turn++;

		if (turn == n * n + 1)
			break;
	}

	if (turn == n * n + 1)
	{
		cout << "Draw";
	}

}
