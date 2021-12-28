#include<iostream>
using namespace std;
class Distance {
private:
        int feet;
        float inches;
public:
        Distance():feet(0),inches(0.0)
        {
        }
        Distance (int ft ,int in):feet(ft),inches(in)
        {
        }
        void get_dist()
        {
            cout<<"Enter feet = ";
            cin>>feet;
            cout<<endl;
            cout<<"Enter inches = ";
            cin>>inches;
            cout<<endl;
        }
        void show_dist()const{
            cout<<"This is feet = "<<feet<<endl
                <<"This is inches = "<<inches<<endl;
        }
        Distance operator - (Distance)const;
};
Distance Distance::operator- (Distance d2)const
{

    int f=feet-d2.feet;
    float i =inches - d2.inches;
    if(i>=12.0)
    {
        i=12.0;
        f++;
    }
    return Distance(f,i);
}
int main()
{
    Distance d1,d3,d4;
    d1.get_dist();
    cout<<endl;
    Distance d2(11,6.25);
    d3=d1-d2;
    d4=d1-d2-d3;

    cout<<"Distance 1 = ";d1.show_dist();cout<<endl;
    cout<<"Distance 2 = ";d2.show_dist();cout<<endl;
    cout<<"Distance 3 = ";d3.show_dist();cout<<endl;
    cout<<"Distance 4 = ";d4.show_dist();cout<<endl;
    return 0;
}