#include <iostream>

class Player
{
    public:
        virtual std::pair<int, int> move()=0;

    private:
        int idPlayer;
};
