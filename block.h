#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "color.h"

using namespace std;

class Block
{
public:
    Block();
    void Draw(int offsetX, int offsetY);
    void Move(int rows, int columns);
    vector<Position> GetCellPosition();
    void Rotate();
    void UndoRotation();
    int id;
    map<int, vector<Position>> cells;

private:
    int cellSize;
    int rotationState; // Phép quay
    vector<Color> colors;
    int rowOffset;
    int collumnOffset;
};