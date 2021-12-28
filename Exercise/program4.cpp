#include<iostream>
using namespace std;
class Int {
    private:
            int value_1;
    public:
            Int():value_1(0)
            {

            }
            Int(int value):value_1(value)
            {
            }
        int operator +(Int obj)
        {
            value_1+=obj.value_1;
            return value_1;
        }
        int operator -(Int obj)
        {
            value_1-=obj.value_1;
            return value_1;
        }
        int operator *(Int obj)
        {
            value_1*=obj.value_1;
            return value_1;
        }
        int operator /(Int obj)
        {
            value_1/=obj.value_1;
            return value_1;
        }
        void display()
        {
            cout<<"This is result ="<<value_1<<endl;
        }
};
int main()
{
    Int obj_1(2),obj_2(3),obj_3(4);
    obj_1.display();
    obj_3.display();
    obj_1+obj_3;
    obj_1.display();
}