#include <iostream>
using namespace std;
class student
{
private:
	int num;
	int score;
public:
	void set(int a, int b)
	{
		num = a;
		score = b;

	}
	void get()
	{
		cout << num << "    " << score;
	}
	student(int a, int b)
	{
		num = a;
		score = b;

	}
	int max = 0;
	int j = 0;
	int  MAX(student * p,int k)
	{
		for (int i = 0;i < k;i++)
		{
			int a = (p+i)->score;
			int b = p->score;
			if (a > b)
			{
			
				j = i;
				
			}
		}
		cout << (p + j)->num;
		return j;
	}

};

int main()
{
	student stud[5] = {
	   student(2000,600),
	   student(2001,626),
	   student(2002,636),
	   student(2003,526),
	   student(2004,426),
	};
	int i = sizeof(stud) / sizeof(stud[0]);
	student* p = stud;
	stud[0].MAX(stud,i);

}