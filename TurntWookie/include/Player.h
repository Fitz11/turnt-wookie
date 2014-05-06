#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        Player(string n);
        virtual ~Player();

        int getPrisoners();
        void setPrisoners();
        string getName();
        void setName();
    protected:
    private:
        string name;
        float score;
        int prisoners;
        int territory;
        bool isBlack;
};

#endif // PLAYER_H
