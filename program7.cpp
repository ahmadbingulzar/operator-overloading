#include<iostream>
using namespace std;
class Distance{

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
        void get_dist()
        {
            cout<<"Enter feet = ";cin>>feet;
            cout<<endl;
            cout<<"Enter inches = ";
            cin>>inches;
            cout<<endl;
        }
        void show_dist()const
        {
            cout<<"This is feet = "<<feet<<endl;
            cout<<"This is inches = "<<inches<<endl;
        }
        bool operator < (Distance)const;
};
bool Distance ::operator< (Distance d2)const{
    float bf1=feet+inches/12;
    float bf2=d2.feet+d2.inches/12;
    return (bf1<bf2)?true:false;
}
int main()
{
    Distance d1;
    d1.get_dist();
    Distance d2(6,2.5);

    cout<<"distance 1 = ";d1.show_dist();
    cout<<endl;
    cout<<"distance 2 is = ";d2.show_dist();
    cout<<endl;

    if(d1<d2)
        cout<<"distance 1 is less than distance 2"<<endl;
        else    
            cout<<"distance 1 is greatere than or equal to distance 2"<<endl;
        cout<<endl;
        return 0;   
}