#include<iostream>
#include<conio.h>
using namespace std;


class student
{
	int id, marks;
	float cgpa;
	
	public:
		// Constructor
		student()
		{
			id=0; 
			marks=0;
			cgpa=0;
		}
		// Set functions
		void set_id()
		{
			cout<<"Enter the id of the student"<<endl;
			cin>>id;
		}
		void set_marks()
		{
			cout<<"Enter the marks of the student"<<endl;
			cin>>marks;
		}
		void set_cgpa()
		{
			cout<<"Enter the cgpa of the student"<<endl;
			cin>>cgpa;
		}
		
		// Get Functions
		int get_id()
		{
			return id;
		}
		int get_marks()
		{
			return marks;
		}
		float get_cgpa()
		{
			return cgpa;
		}
		
};// class of student




int main()
{
	// Creating the object
	student data;
	
	// Calling the functions 
	data.set_id();
	data.set_marks();
	data.set_cgpa();
	
	// Displaying the data
	cout<<"ID: "<<data.get_id()<<endl;
	cout<<"Marks: "<<data.get_marks()<<endl;
	cout<<"CGPA: "<<data.get_cgpa()<<endl;
	
	
	
	getch();
	return 0;
}// main
