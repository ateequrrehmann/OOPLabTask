#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;


class student
{
	int id, *marks, sum, i;
	float average, size;
	
	public:
		// Constructor
		student()
		{
			id=0;
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
			for(int i=0; i<size; i++)
			{
				cout<<"Enter the subject "<<i+1<<" "<<endl;
				cin>>marks[i];
			}
		}
		
		void choice()
		{
			cout<<"How many subject marks do you enter"<<endl;
			cin>>size;
			marks=new int(size);
		}
		void pass_fail()
		{
			if(average<=50)
			{
				cout<<"\t You are Fail"<<endl;
			}
			if(average>50)
			{
				cout<<"\t You are Pass"<<endl;
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
			average=sum/size;
			return average;
		}
};// class of student


int main()
{
	// Creating objects
	student data;
	
	// Calling the function
	data.set_id();
	data.choice();
	data.set_marks();
	
	
	// Displaying the data
	cout<<endl;
	cout<<"\n\t Data"<<endl;
	cout<<"\n\t ID: "<<data.get_id()<<endl;
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\t Average is "<<data.get_average()<<endl;
	data.pass_fail();
	
	getch();
	return 0;
}// main
