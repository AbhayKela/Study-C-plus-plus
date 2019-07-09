class Point // base class / parent class /  super class
{
    protected:
        int x;
    public: 
        Point (int = 0); // constructor: default value of variable in point class will be 0
        ~Point(); // destructor
        int getX() {return x;};
        void setX(int); // declaring function
};
class Point2D : public Point // derived class / child class / sub class
{
    protected:
        int y;
    public: 
        Point2D (int = 0, int = 0); // constructor: default value of variable in point class will be 0
        ~Point2D(); // desctructor
        int getY() {return y;};
        void setY(int); // declaring function
        void setXY (int,int);
        Point2D operator+(Point2D); //Declaring + operator for Point2D
};
/* 
    class Point2D: public Point 
    everything except constructor and descructor will be included in derived class
    private : CANNOT ACCESS
    protected : protected
    public : public

    class Point2D: protected Point 
    everything except constructor and descructor will be included in derived class
    private : CANNOT ACCESS
    protected : protected
    public : protected

    class Point2D: private Point 
    everything except constructor and descructor will be included in derived class
    private : CANNOT ACCESS
    protected : private
    public : private

 */