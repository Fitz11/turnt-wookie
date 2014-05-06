#ifndef BOARD_H
#define BOARD_H


class Board
{
    public:
        Board();
        virtual ~Board();
        changeTurn();
    protected:
    private:
        Point[] points;
        bool blackTurn;

};

#endif // BOARD_H
