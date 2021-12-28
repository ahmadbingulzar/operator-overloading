#include <iostream>
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
    void get_str()
    {
        cin.get(str, SZ);
    }
    bool operator==(String ss) const
    {
        return (strcmp(str, ss.str) == 0) ? true : false;
    }
};
int main()
{
    String s1 = "yes";
    String s2 = "no";
    String s3;

    cout << "Enter yes or no " << endl;
    s3.get_str();

    if (s3 == s1)
        cout << "You types yes" << endl;
    else if (s3 == s2)
        cout << "You typed no" << endl;
    else
        cout << "You did not follow the instructions" << endl;
    return 0;
}