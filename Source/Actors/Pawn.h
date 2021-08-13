#pragma once
#include "Piece.h"

class Pawn : public virtual Piece {
    public:
        static const short ID = 6;

        using Piece::Piece;
        virtual bool IsOfType(short id);
};