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
	
	
	ofstream writedata_even;
	ofstream writedata_odd;
	writedata_even.open("even_number4.txt");
	writedata_odd.open("odd_number4.txt");
	if(!writedata_even)
	{
		cout<<"Cannot open file due to unknown reason"<<endl;
	}
	if(!writedata_odd)
	{
		cout<<"Cannot open file due to unknown reason"<<endl;
	}
	
	cout<<"\n Now writing data into even file"<<endl;
	
	writedata_even<<"\n\t\t ====== Even Numbers ======"<<endl;
	// Writing data in file(name even_number3.txt) using ofstream
	
	for(int i=0; i<10; i++)  // loop to check all number
	{
		if(num[i]%2==0)  //checking if the number is even
		{
			writedata_even<<num[i]<<endl; // even number stores in file
		}
		else
		{
			writedata_odd<<num[i]<<endl;
		}
	}
			
	writedata_even.close();
	writedata_odd.close();
	
	
	
	
	getch();
	return 0;
}//main
