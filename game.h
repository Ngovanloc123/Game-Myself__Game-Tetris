#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    ~Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;
    Music music;

private:
    void MoveBlockLeft();
    void MoveBlockRight();
    bool IsBlockOutSide();
    Block GetRandomBlock();
    vector<Block> GetAllBlocks();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int lineCleared, int moveDownPoint);
    Grid grid;
    vector<Block> blocks; // Danh sách hàng đợi tiếp theo
    Block currentBlock;
    Block nextBlock;
    Sound rotateSound;
    Sound clearSound;
};