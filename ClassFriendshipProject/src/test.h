class B;
class A
{
    public: 
        void setsecretValue(B &, int); 

};
class B
{
        friend class A;
        int secretValue;
    public: 
        int getsecretValue () {return secretValue;}


};