//This pointer
#include<iostream>
using namespace std;
class Employee
{
	public:
			int id;
			string name;
			float salary;
			
			Employee(int id,string name,float salary)
			{
				this->id=id;
				this->name=name;
				this->salary=salary;
			}
			
			/*
			Employee(int i,string n,float s)
			{
				id=i;
				name=n;
				salary=s;
			}
			*/
			
			void display()
			{
				cout<<"Employee Id is :: "<<id<<endl;
				cout<<"Employee Name is :: "<<name<<endl;
				cout<<"Employee Salary is :: "<<salary<<endl;
			}
};
int main()
{
		cout<<"Bheda Dhruv"<<endl;
	cout<<"220130318012"<<endl;
	Employee e1=Employee(1,"Dhruv",15000);
	Employee e2=Employee(2,"Dax",20000);
	e1.display();
	e2.display();
	return 0;
}
