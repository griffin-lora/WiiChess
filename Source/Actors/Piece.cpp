#include "Piece.h"

bool Piece::IsOfType(short id) {
    return id == ID || Sprite::IsOfType(id);
}

void Piece::Load(DataStream& stream) {
    boardRef.Load(stage, stream);
    stream >> color;
    stream >> loc;
}

void Piece::Create() {
    Sprite::Create();
    Board* board = boardRef;
    if (board == nullptr) {
        return;
    }
    board->AddPiece(this);
}