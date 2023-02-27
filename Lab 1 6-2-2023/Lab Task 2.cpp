#include<iostream>
#include<conio.h>
using namespace std;


class student
{
	int id, marks[5], sum, i;
	float cgpa;
	float average;
	
	public:
		// Constructor
		student()
		{
			id=0;
			cgpa=0;
			sum=0; 
			average=0;
			i=0;
		}
		// Set functions
		void set_id()
		{
			cout<<"Enter the id of the student"<<endl;
			cin>>id;
		}
		
		void set_marks()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"Enter the subject "<<i+1<<" "<<endl;
				cin>>marks[i];
			}
		}
		
		
		
		// Get functions
		int get_id()
		{
			return id;
		}
		
		float get_average()
		{
			for(int i=0; i<5; i++)
			{
				sum=sum+marks[i];
			}
			average=sum/5.0;
			return average;
		}
};// class of student




int main()
{
	// Creating the object
	student data;
	
	// Calling the functions 
	data.set_id();
	data.set_marks();
	
	
	// Displaying the data
	cout<<"ID: "<<data.get_id()<<endl;
	cout<<"Average is "<<data.get_average()<<endl;
	
	// Pass/ fail logic
	if(data.get_average()<=50)
	{
		cout<<"You are Fail"<<endl;
	}
	if(data.get_average()>50)
	{
		cout<<"You are Pass"<<endl;
	}
	
	
	getch();
	return 0;
}// main

