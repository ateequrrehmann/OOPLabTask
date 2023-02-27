#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>  // Header file for using ifstream or ofstream
using namespace std;


int main()
{	
	int num[10];
	
	string even_file, odd_file, even_path, odd_path;
	
	cout<<"Enter the name of file where even file"<<endl;
	cin>>even_file;
	cin.ignore();
	cout<<"Enter the file path"<<endl;
	getline(cin,even_path);
	even_file=even_path+"/" +even_file+".txt"; // giving the file the extension of .txt
	
	cout<<"Enter the name of file where odd file "<<endl;
	cin>>odd_file;
	
	cin.ignore();
	getline(cin,odd_path);
//	odd_file=odd_file+".txt";  // giving the file the extension of .txt
	odd_file=odd_path+"/"+odd_file+".txt";
	cout<<"Enter 10 numbers"<<endl;
	for (int i=0; i<10; i++)
	{
		cin>>num[i];	 // taking input from the user
	}	 
	
	ofstream writedata_even;
	ofstream writedata_odd;
	writedata_even.open( even_file.c_str());
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
	
	for(int i=0; i<10; i++)  // loop to check all number
	{
		if(num[i]%2==0)  //checking if the number is even
		{
			writedata_even<<num[i]<<endl; // even number stores in file
		}
		else
		{
			writedata_odd<<num[i]<<endl;  // odd number stores in file
		}
	}
			
	writedata_even.close();
	writedata_odd.close();
	

	getch();
	return 0;
}//main



