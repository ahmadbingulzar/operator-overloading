#include<iostream>
using namespace std;
class Sterling {
    private:
            int long pounds;
            int shilling ;
            int pence ;
    public:
            Sterling():pounds(0),shilling(0),pence(0)
            {

            }   
            Sterling(double decimal)
            {

            }   
            Sterling(int long pounds ,int shelling ,int pence):pounds(pounds),shilling(shelling),pence(pence)

            {

            }
            void get_sterling()
            {
                char temp;
                cout<<"Enter amount in this format $9.19.11 ";
                cin>>pounds>>temp>>shilling>>temp>>pence;
            }
            void show_sterling()
            {
                cout<<"Your total amount is = $"<<pounds<<"."<<shilling<<"."<<pence<<endl;
            }
            Sterling operator + (Sterling obj)
            {
                pounds+=obj.pounds;
                shilling+=obj.shilling;
                pence+=obj.pence;
                return Sterling(pounds,shilling,pence);
            }
            Sterling operator-(Sterling obj)
            {
                pounds-=obj.pounds;
                shilling-=obj.shilling;
                pence-=obj.pence;
                return Sterling(pounds,shilling,pence);
            }
            Sterling operator *(Sterling obj)
            {
                pounds*=obj.pounds;
                shilling*=obj.shilling;
                pence*=obj.pence;
                return Sterling(pounds,shilling,pence);
            }
            Sterling operator /(Sterling obj)
            {
                pounds/=obj.pounds;
                shilling/=obj.shilling;
                pence/=obj.pence;
                return Sterling(pounds,shilling,pence);
            }
            Sterling operator /(Sterling obj)
            {
             return Sterling(double(Sterling(pounds,shilling,pence))+ double(obj));
            }
             operator double()
            {
                double pounds_double = static_cast<double>(pounds);
                double shilling_double=static_cast<double>(shilling);
                double pence_double=static_cast<double>(pence);
            }
};
int main()
{
    //objects khud bana lena mera mod ni a 
}