#ifndef GAME_H
#define GAME_H


class Game
{
    public:
        Game();
        Game(Player b, Player w)
        virtual ~Game();

        addMove();
        getNumMoves();
    protected:
    private:
        Player black, white;
        Board gameBoard;
        int numMoves;
        bool isOver;
};

#endif // GAME_H
