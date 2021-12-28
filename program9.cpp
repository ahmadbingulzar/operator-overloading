#include<iostream>
using namespace std;
class Distance {

private:
        int feet;
        float inches;

public:
        Distance():feet(0),inches(0)
        {

        }
        Distance(int ft,float inc):feet(ft),inches(inc)
        {
        }
        void get_distance()
        {
            cout<<"Enter feet = ";
            cin>>feet;
            cout<<endl;
            cout<<"Enter inches = ";
            cin>>inches;
        }
        void show_dist()const
        {
            cout<<"Feet is = "<<feet<<endl
                <<"inches is = "<<inches<<endl;
        }
        void  operator +=(Distance);
};
void Distance ::operator+=(Distance d2)
{
    feet+=d2.feet;
    inches+=d2.inches;
    if(inches>=12.0)
    {
        inches-=12.0;
        feet++;
    }
}
int main()
{
    Distance d1;
    d1.get_distance();

    cout<<"This is distance 1 "<<endl;
    d1.show_dist();

    Distance d2(11,6.25);

    cout<<"This is distance 2 "<<endl;
    d2.show_dist();

    d1+=d2;
    cout<<"After addition distance 1 is ="<<endl;
    d1.show_dist();
    return 0;
}