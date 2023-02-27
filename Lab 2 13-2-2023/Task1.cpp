#include<iostream>
#include<conio.h>
#include<fstream>  // Header file for using ifstream or ofstream
using namespace std;


int main()
{	
	ofstream writedata;
	writedata.open("mydata1.txt"); // opening the file
	cout<<"\n Now writing data into my file"<<endl;
	
	writedata<<"\n\t\t ====== Student Record ======"<<endl;
	// Writing data in file(name my data.txt) using ofstream
	writedata<<"\t\t1. Ateeq Ur Rehman"<<endl;
	writedata<<"\t\t2. Aneeb Ur Rehman"<<endl;
	writedata<<"\t\t3. Shafiq Ur Rehman"<<endl;
	writedata<<"\t\t4. Muhammad Ali"<<endl;
	writedata<<"\t\t5. Muhammad Azhar"<<endl;
		
	writedata.close(); //closing the file
	getch();
	return 0;
}//main
