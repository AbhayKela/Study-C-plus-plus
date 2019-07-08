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
};

class Point3D : public Point2D // derived class / child class / sub class
// this will only inherit public of the class Point & Point2D
{
    protected:
        int z;
    public: 
        Point3D (int = 0, int = 0, int = 0); // constructor: default value of variable in point class will be 0
        ~Point3D(); // desctructor
        int getZ() {return z;};
        void setX(int);
        void setZ(int); // declaring function
        void setXYZ(int,int,int);
};