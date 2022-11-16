class Morpion
{
    public:
        Morpion();
        void setBox(int x, int y, bool cross);
        int getBox(int x, int y);
        bool terminalState();
        bool isPlayerWin(int idPlayer);
        void celebrate();
        void outputGrid();
        void run();
    private:
        int grid[3][3];
        Player player1;
        Player player2;
};
