#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class String
{
private:
    enum{SZ = 80};
    char str[SZ];

public:
    String()
    {
        strcpy(str, "");
    }
    String(char s[])
    {
        strcpy(str, s);
    }
    void display() const
    {
        cout << str << endl;
    }

    String operator+(String ss)
    {
        String temp;
        if (strlen(str) + strlen(ss.str))
        {
            strcat(temp.str, ss.str);
        }
        else
        {
            cout << "String overflow" << endl;
            exit(1);
        }
        return temp;
    }
};
int main()
{
    String s1 = "Merry christmas! ";
    String s2 = "Happy new year!";
    String s3;
    s1.display();
    s2.display();
    s3.display();

    s3 = s1 + s2;
    cout << endl;
    s3.display();
    cout << endl;
    return 0;
}