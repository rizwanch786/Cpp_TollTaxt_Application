#include<iostream>
#include<Windows.h>
using namespace std;
int neg =0;
class tollboth
{
	float T_Amount;
	int T_cars;
public:
	tollboth();//default constructor
	void setT_Amount(float x);//setter
	void setT_cars(float y);//setter
	float getT_Amount();//accessor
	float getT_cars();//getter
	// start Member function
	void pay(int,int);
	void unpay(int);
	void display();
};
//constructor defination
tollboth::tollboth()
{
	T_cars = 0;
	T_Amount = 0;
}
// setter defination
void tollboth::setT_cars(float x)
{
	T_cars = x;

}
//setter defination
void tollboth::setT_Amount(float y)
{
	T_Amount = y;
}
// getter defination
float tollboth::getT_cars()
{
	return T_cars;
}
float tollboth::getT_Amount()
{
	return T_Amount;
}
void tollboth::pay(int w,int x)
{
	
	T_cars = T_cars + w;
	T_Amount = T_Amount + x;
	
}
void tollboth::unpay(int un)
{
	 neg = neg+un;
	 T_cars = T_cars + 1;

}
void tollboth::display()
{
	cout << "This is total number of cars::" << T_cars<<endl;
	cout << "This is number of <<payed>> cars::" << T_cars-neg << endl;
	cout << "This is the number of <<unpayed>> cars::" << neg << endl;
	cout << "This is total amount of paid cars(per car 50)::" << T_Amount << endl<<endl<<endl;

}

int main()
{
	
	char a='\0';
	int count = 1;
	tollboth object;

	
		
		cout << "   ::.....To check our tollboth.....:: " <<endl;
		cout << "if passing car pay Toll.Tex then Press 'P':" <<endl;
		cout << "if passing car Not.pay Toll.Tex then Press 'N':" <<endl;
		cout << "if You want to check the result then Press 'e' OR 'E':" << endl;
		cout << "plz enter your choice\n";
		do
		{
			cout <<count<<">>";
			cin >> a;
			{
				if (a == 'p' || a == 'P')
				{
					object.pay(1,50);

				}

				else if (a == 'n' || a == 'N')
				{
					object.unpay(1);
					
				}
				else if (a == 'e' ||a=='E')
				{

					object.display();
				}
				else
				{
					cout << ":Invalid command plz Enter Again:"<<endl;
				}
			}count++;
		} while (a != 'e' && a != 'E');
		

	

	object.getT_Amount();
	object.getT_cars();

	
	cin.get();
	system("pause");
	return 0;
}
