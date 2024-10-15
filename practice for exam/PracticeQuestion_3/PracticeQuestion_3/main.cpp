#define _crt_secure_no_warnings
#include <iostream>
using namespace std;

class Bee
{
protected:
	int x;
public:
	Bee(int k)
	{
		x = k;
	}
	virtual ~Bee()
	{
		cout << "<1>: " << x << endl;
	}
	virtual void f1()
	{
		cout << "<2>";
	}
	void f2()
	{
		cout << "<3>";
	}
};

class HoneyBee : public Bee
{
	char c;
public:
	HoneyBee(int m, char z) : Bee(m)
	{
		c = z;
	}
	virtual ~HoneyBee()
	{
		cout << "[4]: " << x << ", " << c << endl;
	}
	void f1()
	{
		cout << "[5]";

	}
	void f2()
	{
		cout << "[6]";
	}
};

int main()
{
	Bee* wow[2];


	wow[0] = new Bee(10);
	wow[1] = new HoneyBee(-22, '$');
	wow[0]->f1();
	wow[1]->f1();
	wow[0]->f2();
	wow[1]->f2();



	delete wow[0];
	delete wow[1];
	return 0;
}