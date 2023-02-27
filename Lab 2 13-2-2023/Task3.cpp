#include<iostream>
#include<conio.h>
#include<fstream>  // Header file for using ifstream or ofstream
using namespace std;


int main()
{	
	int num[10];
	cout<<"Enter 10 numbers"<<endl;
	for (int i=0; i<10; i++)
	{
		cin>>num[i];	 // taking input from the user
	}	 
	
	
	ofstream writedata;
	
	if(!writedata)
	{
		cout<<"Cannot open file due to unknown reason"<<endl;
	}
	writedata.open("even_number3.txt");
	cout<<"\n Now writing data into my file"<<endl;
	
	writedata<<"\n\t\t ====== Even Numbers ======"<<endl;
	// Writing data in file(name even_number3.txt) using ofstream
	
	for(int i=0; i<10; i++)  // loop to check all number
	{
		if(num[i]%2==0)  //checking if the number is even
		{
			writedata<<num[i]<<endl; // even number stores in file
		}
	}
			
	writedata.close();
	getch();
	return 0;
}//main
