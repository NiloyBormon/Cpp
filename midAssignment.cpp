#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h> // For _getch()
using namespace std;

const int SIZE = 3;

// Function prototypes
void printBoard(int board[SIZE][SIZE], const string& moveMessage);
int countSorted(int board[SIZE][SIZE]);
bool isSolved(int board[SIZE][SIZE]);
void shuffleBoard(int board[SIZE][SIZE]);
string moveTile(int board[SIZE][SIZE], int key);

// Print the board with the count of sorted numbers below and move message
void printBoard(int board[SIZE][SIZE], const string& moveMessage) {
    system("cls"); // Clear the screen
    cout << moveMessage << endl; // Display move message

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0)
                cout << setw(3) << " ";
            else
                cout << setw(3) << board[i][j];
        }
        cout << endl;
    }

    // Display count of sorted numbers
    cout << "Count: " << countSorted(board) << endl;
}

// Count how many numbers are in their correct positions
int countSorted(int board[SIZE][SIZE]) {
    int correct = 1, count = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == SIZE - 1 && j == SIZE - 1) {
                if (board[i][j] == 0) // The last cell should be empty
                    count++;
                return count;
            }
            if (board[i][j] == correct++) {
                count++;
            }
        }
    }
    return count;
}

// Check if the puzzle is solved
bool isSolved(int board[SIZE][SIZE]) {
    return countSorted(board) == SIZE * SIZE; // All tiles are in their correct position
}

// Shuffle the board
void shuffleBoard(int board[SIZE][SIZE]) {
    srand(time(0));
    for (int i = 0; i < 100; i++) {
        int r1 = rand() % SIZE, c1 = rand() % SIZE;
        int r2 = rand() % SIZE, c2 = rand() % SIZE;
        swap(board[r1][c1], board[r2][c2]);
    }
}

// Move the empty space based on arrow key input and return move direction
string moveTile(int board[SIZE][SIZE], int key) {
    int emptyRow, emptyCol;

    // Find the position of the empty space
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                emptyRow = i;
                emptyCol = j;
                break;
            }
        }
    }

    // Process arrow key input
    int newRow = emptyRow, newCol = emptyCol;
    string direction = "Invalid Move";

    if (key == 72) { newRow--; direction = "Pressed: Up"; }     // Up arrow
    else if (key == 80) { newRow++; direction = "Pressed: Down"; } // Down arrow
    else if (key == 75) { newCol--; direction = "Pressed: Left"; } // Left arrow
    else if (key == 77) { newCol++; direction = "Pressed: Right"; } // Right arrow

    // Check if the move is valid
    if (newRow >= 0 && newRow < SIZE && newCol >= 0 && newCol < SIZE) {
        swap(board[emptyRow][emptyCol], board[newRow][newCol]);
        return direction;
    }
    return "Invalid Move";
}

int main() {
    int board[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0} // 0 represents the empty space
    };

    shuffleBoard(board);

    string moveMessage = "Use Arrow Key"; // Initial message

    while (true) {
        printBoard(board, moveMessage);

        if (isSolved(board)) {
            cout << "\nCongratulations! You solved the puzzle!" << endl;
            break;
        }

        int key = _getch(); // Get keyboard input

        // If it's a special key (like arrow keys), _getch() must be called twice
        if (key == 224) {
            key = _getch();
            moveMessage = moveTile(board, key); // Update the move message
        } else if (key == 'q' || key == 'Q') {
            cout << "\nThanks for playing!" << endl;
            break;
        }
    }

    return 0;
}
