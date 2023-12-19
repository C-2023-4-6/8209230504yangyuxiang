#include<iostream>
using namespace std;
class Point
{
public:
	Point(){
		x = 60;
		y = 80;
	}
	void setPoint(int i,int j)
	{
		x = x + i;
		y = y + j;
	}
	int display() 
	{
		cout << "xÖá×ø±ê" << x << endl;
		cout << "yÖá×ø±ê" << y<< endl;
		return x;
	}
private:
	int x;
	int y;
};

int main() 
{
	int a = 10;
	int b = 10;
	Point C;
	C.display();
	//C.setPoint();
	Point C1;
	C1.setPoint(82,60);
	C1.display();
}