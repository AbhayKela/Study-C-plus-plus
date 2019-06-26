class Personaldata
{
    private: // variables can be used within the classes only
    short age;
    int *p; // creating a random variable

    public:  // below variable can be used outside of this class
    Personaldata();
    ~Personaldata(); // Destrcutor is the place where we free up memory
    void setage(int);
    short getage(){return age;};
};