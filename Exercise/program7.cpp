#include <iostream>
using namespace std;
class Fraction_calculator
{

private:
	int numenator, denomenator;

public:

Fraction_calculator():numenator(0),denomenator(0)
{

}
Fraction_calculator(int num,int den):numenator(num),denomenator(den)
{

}
	void get_data()
	{
		char temp;
		cout << "Enter fraction in p/q form = ";
		cin >> numenator >> temp >> denomenator;
	}

	void arithemetic_operations(Fraction_calculator obj_1, Fraction_calculator obj_2, char temp)
	{

		switch (temp)
		{
		case '+':
			cout << "\nAddition of two fraction is: ";
			numenator = (obj_1.numenator * obj_2.denomenator) + (obj_1.denomenator * obj_2.numenator);
			denomenator = obj_1.denomenator * obj_2.denomenator;
			break;

		case '-':
			cout << "\nSubtraction of two fraction is: ";
			numenator = (obj_1.numenator * obj_2.denomenator) - (obj_1.denomenator * obj_2.numenator);
			denomenator = obj_1.denomenator * obj_2.denomenator;
			break;

		case '*':
			cout << "\nMultiplication of two fraction is: ";
			numenator = obj_1.numenator * obj_2.numenator;
			denomenator = obj_1.denomenator * obj_2.denomenator;
			break;

		case '/':
			cout << "\nDivision of two fraction is: ";
			numenator = obj_1.numenator * obj_2.denomenator;
			denomenator = obj_1.denomenator * obj_2.numenator;
			break;
		}
	}
	void display_Fraction() const
	{
		cout << numenator << "/" << denomenator;
	}
	void lowTerms()
	{
		long tnum, tden, temp, gcd;

		tnum = labs(numenator);
		tden = labs(denomenator);

		if (tden == 0)
		{
			cout << "Illegal fraction: division by 0";
			exit(1);
		}
		else if (tnum == 0)
		{
			numenator = 0;
			denomenator = 1;
			return;
		}

		while (tnum != 0)
		{
			if (tnum < tden)
			{
				temp = tnum;
				tnum = tden;
				tden = temp;
			}
			tnum = tnum - tden;
		}
		gcd = tden;
		numenator = numenator / gcd;
		denomenator = denomenator / gcd;
		cout << numenator << "/" << denomenator;
		cout << endl;
	}
    Fraction_calculator operator +(Fraction_calculator obj)
    {
        numenator+=obj.numenator;
        denomenator+=obj.denomenator;
        return Fraction_calculator (numenator,denomenator);
    }
    Fraction_calculator operator-(Fraction_calculator obj)
    {
        numenator-=obj.numenator;
        denomenator-=obj.denomenator;
        return Fraction_calculator (numenator,denomenator);
    }
    Fraction_calculator operator*(Fraction_calculator obj)
    {
        numenator*=obj.numenator;
        denomenator*=obj.denomenator;
        return Fraction_calculator (numenator,denomenator);
    }
    Fraction_calculator operator /(Fraction_calculator obj)
    {
        numenator/=obj.numenator;
        denomenator/=obj.denomenator;
        return Fraction_calculator (numenator,denomenator);
    }
    Fraction_calculator operator==(Fraction_calculator obj)
    {
        
    }
};
int main()
{
	Fraction_calculator fraction1, fraction2, fraction3;
	char oprt;
	cout << "\nEnter first fraction: ";
	fraction1.get_data();
	cout << "\nEnter second fraction: ";
	fraction2.get_data();
	cout << "\nEnter an operator for arithmatic operation: ";
	cin >> oprt;
	fraction3.arithemetic_operations(fraction1, fraction2, oprt);
	fraction3.display_Fraction();
	cout << "\nLoswest terms of fraction is: ";
	fraction3.lowTerms();

	return 0;
}
