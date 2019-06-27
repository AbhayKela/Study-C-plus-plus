class Position
{
    int x , y; // Private variable not accessible outside this class decalaration
    public:
        Position (int, int); // mentioned variable type in constructor
        ~Position(); // no variable type in destructor
        void getPosition() const; // declaring constant function works only when the calling function is const
        void setPosition(int, int);
        friend void setX(Position &, int); // Declaring function friend to a class
};