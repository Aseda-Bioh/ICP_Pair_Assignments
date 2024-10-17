/*
* Lab 6, 
* Nana Kwaku A. Ampadu-Boateng & Nana Kwabena Aseda Bioh 
*/

#include <iostream>
#include <iomanip>
using namespace std;

//these are our function prototypes
void inputArray(int alpha[20]);
void doubleArray(const int alpha[20], int beta[20]);
void copyAlphaBeta(const int alpha[20], const int beta[20], int matrix[10][4]);
void printArray(const int arr[20]);
void printMatrix(const int matrix[10][4]);

int main() {
    int alpha[20];
    int beta[20];
    int matrix[10][4];

    // a: Filling the alpha array with user input
    inputArray(alpha);

    // b: Creating an array with double the values of alpha
    doubleArray(alpha, beta);

    // c: Copying both alpha and beta into the 2D matrix
    copyAlphaBeta(alpha, beta, matrix);
    

    cout << "Alpha array:";
    cout << endl;
    printArray(alpha);


    cout << "Beta array: ";
    cout << endl;
    printArray(beta);


    cout << "Matrix:";
    cout << endl;
    printMatrix(matrix);


    return 0;
}

// Our function to input values into the alpha array
void inputArray(int alpha[20]) {
    cout << "Enter 20 numbers for the alpha array:";
    cout << endl;
    for (int i = 0; i < 20; i++) {
        cin >> alpha[i];
    }
}


//Our  function that creates beta array with doubled values from alpha
void doubleArray(const int alpha[20], int beta[20]) {
    for (int i = 0; i < 20; i++) {
        beta[i] = alpha[i] * 2;
    }
}

//Our function that copies alpha and beta arrays into the matrix
void copyAlphaBeta(const int alpha[20], const int beta[20], int matrix[10][4]) {
    // Coping the elements of alpha into the first five rows of matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = alpha[i * 4 + j];
        }
    }

    // Coping the elements of beta into the last five rows of matrix
    for (int i = 5; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = beta[(i - 5) * 4 + j];
        }
    }
}

//Our function to print an array
void printArray(const int arr[20]) {
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 15 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

//Our function to print the matrix
void printMatrix(const int matrix[10][4]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}