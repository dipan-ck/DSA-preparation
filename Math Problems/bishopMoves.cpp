#include <iostream>
#include <math.h>
using namespace std;

// This function calculates the total number of moves a bishop can make on a chessboard
// from a given position (row, col) based on its diagonal movement. A bishop moves diagonally 
// in four directions: top-right, top-left, bottom-right, and bottom-left. The function uses
// the `min` function to determine how far the bishop can move in each direction before hitting
// the edge of the board (8x8 chessboard). The total number of moves is the sum of the moves in
// all four diagonal directions.

int bishopMoves(int row, int col){

int totalMoves = min(8-row, 8-col) + min(8-row, col - 1) + min(row-1, 8-col) + min(row-1, col-1);

return totalMoves;

}

int main(){
    int a = 3;
    int b = 7;

cout<<bishopMoves(a, b);
    
}