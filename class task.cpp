#include<iostream>
using namespace std;
class student{
	string name;
	int id;
	float fee;
	public:
	student()//thois is default constructor
	{
		cout<<"hello I'M default constructor"<<endl;
	}
	student(int x)//this isparametrizedconstructor
	{
		cout<<"hello i'm parameterized constructor"<<endl;
	}
	student(string NAME,int ID,float Fee)
	{
		name=NAME;
		id=ID;
		fee=Fee;
		cout<<"the name is:"<<name<<endl;
		cout<<"the id is:"<<id<<endl;
		cout<<"the fee is:"<<fee<<endl;
	}
};
int main()
{
	student d();//one object can have one constructor only
	student d1(5);
	student d2("unzila",12,78000);
}

