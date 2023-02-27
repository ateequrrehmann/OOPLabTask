#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>  // Header file for using ifstream or ofstream
using namespace std;


int main()
{	

	string name, address;
	int semester, id;
	
	cout<<"Enter your Name"<<endl;
	getline(cin,name);
	cin.ignore();
	cout<<"Enter you registration id"<<endl;
	cin>>id;
	cout<<"Enter your current semester only number"<<endl;
	cin>>semester;
	cin.ignore();
	cout<<"Enter your address"<<endl;
	getline(cin, address);
	cin.ignore();
	
	
	
	ofstream writedata;
	writedata.open("mydata2.txt");  // opening the file
	if(!writedata)  // condition to check if file is created or not
	{
		cout<<"Cannot open file due to unknown reason"<<endl;
	}

	cout<<"\n Now writing data into my file"<<endl;
	
	writedata<<"\n\t\t ====== Student Record ======"<<endl;
	// Writing data in file(name my data2.txt) using ofstream
	writedata<<"Name:\t"<<name<<endl;
	writedata<<"Registration ID:\t"<<id<<endl;
	writedata<<"Current Semester:\t"<<semester<<endl;
	writedata<<"Address:\t"<<address<<endl;
		
	writedata.close(); // closing the file
	getch();
	return 0;
}//main
