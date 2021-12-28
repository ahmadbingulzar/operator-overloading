#include<iostream>
using namespace std;
const int LIMIT=100;
class safearray{
private:
        int arr[LIMIT];
public:
        void put_e1(int n,int e1_value)
        {
            if(n<0||n>=LIMIT)
            {
                cout<<"Index out of bounds";
                exit(1);
            }
            arr[n]=e1_value;
        }
        int get_e1(int n)const
        {
            if(n<0||n>=LIMIT)
            {
                cout<<"Index out of bounds";
                exit(1);
                return arr[n];
            }
        }
};
int main()
{
    safearray sa1;
    for(int j=0;j<LIMIT;j++)
    {
        sa1.put_e1(j,j*10);
    }
    for(int j=0;j<LIMIT;j++)
    {
        int temp=sa1.get_e1(j);
        cout<<"Element "<<j<<" is "<<temp<<endl;
    }
    return 0;
}