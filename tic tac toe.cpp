#include <iostream> 
using namespace std; 

void drawBoard(char b[3][3]) 
{ 
	cout << "-------------\n"; 
	for (int i = 0; i < 3; i++) { 
		cout << "| "; 
		for (int j = 0; j < 3; j++) { 
			cout << b[i][j] << " | "; 
		} 
		cout << "\n-------------\n"; 
	} 
} 

bool checkWin(char b[3][3], char p) 
{ 
	for (int i = 0; i < 3; i++) { 
		if (b[i][0] == p && b[i][1] == p && b[i][2] == p) 
			return true; 
		if (b[0][i] == p && b[1][i] == p && b[2][i] == p) 
			return true; 
	} 
	if (b[0][0] == p && b[1][1] == p && b[2][2] == p) 
		return true; 
	if (b[0][2] == p && b[1][1] == p && b[2][0] == p) 
		return true; 
	return false; 
} 

int main() 
{ 
	char b[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } }; 
	char p = 'X'; 
	int r, c; 
	int t; 

	cout << "Welcome to Tic-Tac-Toe!\n"; 

	for (t = 0; t < 9; t++) { 
		drawBoard(b); 

		while (true) { 
			cout << "Player " << p << ", enter row (0-2) and column (0-2): "; 
			cin >> r >> c; 

			if (b[r][c] != ' ' || r < 0 || r > 2 || c < 0 || c > 2) { 
				cout << "Invalid move. Try again.\n"; 
			} 
			else { 
				break; 
			} 
		} 

		b[r][c] = p; 

		if (checkWin(b, p)) { 
			drawBoard(b); 
			cout << "Player " << p << " wins!\n"; 
			break; 
		} 

		p = (p == 'X') ? 'O' : 'X'; 
	} 

	drawBoard(b); 

	if (t == 9 && !checkWin(b, 'X') && !checkWin(b, 'O')) { 
		cout << "It's a draw!\n"; 
	} 

	return 0; 
}
