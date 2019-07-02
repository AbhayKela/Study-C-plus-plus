class Integer
{
    int nr;
    public:
        Integer() {};
        Integer(int); // convert constructor for adding variables in class and in main file
        operator int(); // declaring int() operator for adding values in main file
        int operator+= (Integer); // declare += operator; must be followed by type int
        int getNr(){return nr;};   

};