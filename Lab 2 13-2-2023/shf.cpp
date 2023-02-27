#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>  // Header file for using ifstream or ofstream
using namespace std;


int main()
{	
	int *number, size;
	
	string even_file, odd_file;
	
	cout<<"Enter the number you want to store"<<endl;
	cin>>size;
	number=new int(size);
	
	cout<<"Enter the name of file where even file"<<endl;
	cin>>even_file;
	even_file=even_file+".txt";  // giving the file the extension of .txt
	
	cout<<"Enter the name of file where odd file "<<endl;
	cin>>odd_file;
	odd_file=odd_file+".txt";  // giving the file the extension of .txt
	cout<<"Enter numbers"<<endl;
	for (int i=0; i<size; i++)
	{
		cin>>number[i];	 // taking input from the user
	}	 
	
	ofstream writedata_even;
	ofstream writedata_odd;
	writedata_even.open(even_file.c_str());
	writedata_odd.open(odd_file.c_str());
	if(!writedata_even)
	{
		cout<<"Cannot open file due to unknown reason"<<endl;
	}
	if(!writedata_odd)
	{
		cout<<"Cannot open file due to unknown reason"<<endl;
	}
	
	cout<<"\n Now writing data into files"<<endl;
	
	// Writing data in file(name even_number3.txt) using ofstream
	
	for(int i=0; i<size; i++)  // loop to check all number
	{
		if(number[i]%2==0)  //checking if the number is even
		{
			writedata_even<<number[i]<<endl; // even number stores in file
		}
		else
		{
			writedata_odd<<number[i]<<endl;  // odd number stores in file
		}
	}
			
	writedata_even.close();
	writedata_odd.close();
	

	getch();
	return 0;
}//main
