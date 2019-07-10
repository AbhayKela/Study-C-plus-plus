#include <iostream>

template <typename T> // creating template for class
class Point
{
    protected:
//      int x; 
        T x; // replacing varibale type x from int to T

    public: 
        Point (T = 0); // constructor: default value of variable in point class will be 0
        ~Point(); // destructor       
     //  T getX() {return x;}; // here instead of T we can return any other variable type
        T getX(); // removing inline function for following generalised function
        void setX(T); // declaring function
};
template <typename T>
Point<T> :: Point (T x)
{
    this -> x = x;
}
template <typename T>
Point<T> :: ~Point (){}
template <typename T>
void Point<T> ::setX(T x)
{
    this -> x = x;
}
// following is generalized function for getX()
template <typename T>
T Point<T> ::getX()
{
    return this -> x;
}
// following is speacilized function for getX()
template<> 
double Point<double> :: getX()
{
    std::cout << "This function only executed when Point<double>" <<std::endl;
    return this->x;
}
/*--------------Following is for class Point2D-------------------------- */
template <typename T>
class Point2D : public Point<T>     // derived class / child class / sub class
{
    protected:
        T y;
    public: 
        Point2D (T = 0, T = 0);
        ~Point2D();
        T getY() {return y;};
        void setY(T);
        void setXY (T,T);
        Point2D operator+(Point2D); //Declaring + operator for Point2D
};
template <typename T>
Point2D<T> :: Point2D(T x, T y) : Point<T>(x) // inheriting value of x from class Point
{
    this -> y = y;
}
template <typename T>
Point2D<T> :: ~Point2D<T> (){}
template <typename T>
void Point2D<T> ::setY(T y)
{
    this -> y = y;
}
template <typename T>
void Point2D<T>::setXY(T x, T y)
{
    setX(x); // to maintain integrity of the class and avoid possible repetation errors in x
    setY(y);
}
template <typename T>
Point2D<T> Point2D<T> :: operator+(Point2D o) // For function template
{
    Point2D tmp;
    tmp.setX(this->getX() + o.getX());
	tmp.setY(this->getY() + o.getY());

    return tmp;
}
// Creating the class template
template<>
class Point <char>
{
    public: 
        Point (char a=0){std::cout << "This is from Point<char>"<<std::endl;}

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