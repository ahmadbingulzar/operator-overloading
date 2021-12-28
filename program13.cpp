#include<iostream>
using namespace std;
class Distance {
private:
        const float MTF;
        int feet;
        float inches;
public:
    Distance ():feet(0),inches(0.0),MTF(3.280833F)
    {
    }
    Distance(float meters):MTF(3.280833F)
    {
        float f1t_feet=MTF*meters;
        feet=int(f1t_feet);
        inches=12*(f1t_feet-feet);
    }
    Distance(int ft,float in):feet(ft),inches(in),MTF(3.280833F)
    {

    }
    void get_dist()
    {
        cout<<"Enter feet = ";
        cin>>feet;
        cout<<"Enter inches = ";
        cin>>inches;
    }
    void show_dist()const
    {
        cout<<"Distance is = "<<feet<<"\'-"<<inches<<'\"';

    }
    operator float()const
    {
        float fracfeet=inches/12;
        fracfeet+=static_cast<float>(feet);
        return fracfeet/MTF;
    }
};
int main()
{
    float mtrs;
    Distance dist1=2.35F;

    cout<<"Distance 1 = ";
    dist1.show_dist();

    mtrs=static_cast<float>(dist1);
    cout<<mtrs<<"meters"<<endl;
    cout<<endl;
    Distance dist2(5,10.25);
    mtrs=dist2;
    cout<<"Distance 2 = "<<mtrs<<"meters"<<endl;

    //dist2=mtrs;
    return 0;
}


