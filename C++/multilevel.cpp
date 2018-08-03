#include <iostream>

using namespace std;

class person
{
	char name[100], gender;
	int age;

	public:
		void getdata()
		{
			cout << "Enter your name: ";
			cin >> name;
			cout << "Enter your gender: ";
			cin >> gender;
			cout << "Enter your age: ";
			cin >> age;
		}

		void displaydata()
		{
			cout << "Name: " << name << endl;
			cout << "Gender: " << gender << endl;
			cout << "Age: " << age << endl;
		}

};

class employee:public person 
{
	float salary;
	int emp_no;

	public:
		void getdata()
		{
			person::getdata();
			cout << "Enter your salary: ";
			cin >> salary;
			cout << "Enter employee number: ";
			cin >> emp_no;
		}

		void displaydata()
		{
			person::displaydata();
			cout << "Salary: " << salary << " dollars" << endl;
			cout << "Employee No: " << emp_no << endl;
		}

};

class programmer:public employee
{
	char lang[200];

	public:
		void getdata()
		{
			employee::getdata();
			cout << "Type in your programming languages: ";
			cin >> lang;
		}
		
		void displaydata()
		{
			employee::displaydata();
			cout << "Languages: " << lang << endl;
		}

};

int main()
{
	programmer p;

	cout << "Enter details: " << endl;
	p.getdata();

	cout << "Here are your details: " << endl;
	p.displaydata();

	return 0;
}