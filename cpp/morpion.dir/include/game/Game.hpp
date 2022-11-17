#ifndef GAME_HPP
#define GAME_HPP

class Game
{
    public:
        virtual bool terminalState()=0;
        virtual void celebrate()=0;
};

#endif
