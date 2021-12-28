
#include <iostream>
using namespace std;

class Admin{
private:
    char *username;
    int pin;
    static Admin* obj;
    Admin()
    {
        username = NULL;
        pin = 0;
    }
public:
 static Admin* getInstance()
    {
        if(obj == NULL)
        {
            obj = new Admin();
        }

        return obj;
    }
    void setUsername(char *username)
    {
        this->username = username;
    }
    void setPin(int pin)
    {
        this->pin = pin;
    }

    void display()
    {
        cout<<"Username : "<<username<<endl;
        cout<<"Pin : "<<pin<<endl;
    }
};

Admin* Admin::obj = NULL;

void makeAnother()
{
    Admin *p = Admin::getInstance();
    p->display();
    p->setPin(6213);
}

int main()
{
    Admin *a = Admin::getInstance();

    char *un = "admin";
    a->setUsername(un);
    a->setPin(7692);

    cout<<"display a object values : "<<endl;
    a->display();

    makeAnother();

    cout<<"after calling makeAnother, values of a object : "<<endl;
    a->display();

    return 0;
}
