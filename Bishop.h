#ifndef BISHOP_H
#define BISHOP_H

#include "Piece.h"

class Bishop: public Piece {
public:
    explicit Bishop(QWidget * parent = nullptr, std::string _color = "");
    std::string GetName() const;
    bool GetStatus() const;
    unsigned GetID() const;
    std::string GetColor() const;
    void SetRow(char _row);
    void SetCol(char _col);
    char GetRow() const;
    char GetCol() const;
    void MovePiece();~Bishop();
};

#endif // BISHOP_H
