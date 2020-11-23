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
    void SetPosition(unsigned _row, unsigned _col);
    unsigned GetRow() const;
    unsigned GetCol() const;
    bool MovePiece(Piece *MyBoardMapping[8][8], unsigned rowInitial, unsigned colInitial, unsigned rowFinal, unsigned colFinal);
    bool Capture(Piece *MyBoardMapping[8][8], unsigned rowInitial, unsigned colInitial, unsigned rowFinal, unsigned colFinal);
    ~Bishop();
};

#endif // BISHOP_H
