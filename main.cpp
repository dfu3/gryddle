#include <iostream>
#include <string>

using namespace std;
const int SIZE = 25; //100 total cells

void fill(string matrix[SIZE][SIZE])
{
    //populate matrix
    for (int r=0; r < SIZE-1; r++) {
        for (int c=0; c < SIZE-1; c++) {
            matrix[r][c] = " # ";
        }
    }
}

void draw(string matrix[SIZE][SIZE])
{
    //display matrix
    for (int r=0; r < SIZE-1; r++) {
        cout << '\n';
        for (int c=0; c < SIZE-1; c++) {
            cout << matrix[r][c];
        }
    }
}

int main()
{
    string grid[SIZE][SIZE];
    fill(grid);
    draw(grid);

    return 0;
}
