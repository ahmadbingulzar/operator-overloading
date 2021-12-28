#include <iostream>
using namespace std;

class Rational
{
private:
    int p, q;
public:
    friend istream& operator>>(istream& in, Rational& r);
    friend ostream& operator<<(ostream& out, const Rational& r);

    void display()
    {
        cout<<"p = "<<p<<endl;
        cout<<"q = "<<q<<endl;
    }

};
istream& operator>>(istream& in, Rational& r)
{
    cout<<"P = ";
    in>>r.p;
    cout<<"Q = ";
    in>>r.q;

    return in;
}
ostream& operator<<(ostream& out,const Rational& r)
{
    out<<r.p<<"/"<<r.q<<endl;
    return out;
}
int main()
{
    Rational r1;
    cin>>r1;

    Rational r2=r1;
    //cout<<r2<<endl;

    Rational r3;
    r3=r1;

    cout<<r3;
    return 0;
}