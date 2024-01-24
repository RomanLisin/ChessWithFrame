#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define DOWN_LEFT_ANGLE (char)192
#define DOWN_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196<<char(196) // double to make a square
#define VERTICAL_LINE (char)179
#define WHITE_BOX (char)219<<(char)219
#define BLACK_BOX (char)32 // space

void main() {
	setlocale(LC_ALL, " ");
	int n;
	cout << "Enter board size: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C"); // enter default encoding

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {

			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else if (i % 2 == j % 2)cout << WHITE_BOX;
			else cout << "  ";
		}
		cout << endl;
	}
}
