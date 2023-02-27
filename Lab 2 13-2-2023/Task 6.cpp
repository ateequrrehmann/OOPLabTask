#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

//void grade(float avg);
struct student
{
	string name;
	int id, q1, q2, a1, a2, mid, final;
};

float cal_marks(int quiz1, int quiz2, int assig1, int assig2, int mid, int final)
{
	int total;
	double average;
	total=quiz1+ quiz2 +  assig1 + assig2 +  mid + final;
	average=total/5;
	cout<<"Average is"<<average<<endl;
//	ofstream average1;
//	average1.open("data.txt" , ios::app);
//	average1<<"Average is "<<average<<endl;
//	average1.close();
	return average;
};

char grade(float avg)
{
	char grade1;
	if(avg>=90)
	{
		grade1='A';
		
//		ofstream grade;
//		grade.open("data.txt" , ios::app);
//		grade<<"Grade A"<<endl;
//		grade.close();
	}
	else if(avg>=80 && avg<90)
	{
		grade1='B';
//		cout<<"Grade B"<<endl;
//		ofstream grade;
//		grade.open("data.txt", ios::app);
//		grade<<"Grade B"<<endl;
//		grade.close();
	}
	else if(avg>=70 && avg<80)
	{
		grade1='C';
//		cout<<"Grade C"<<endl;
//		ofstream grade;
//		grade.open("data.txt", ios::app);
//		grade<<"Grade C"<<endl;
//		grade.close();
	}
	else if(avg>=60 && avg<70)
	{
		grade1='D';
//		cout<<"Grade D"<<endl;
//		ofstream grade;
//		grade.open("data.txt", ios::app);
//		grade<<"Grade D"<<endl;
//		grade.close();
	}
	else
	{
		grade1='F';
//		cout<<"Fail"<<endl;
//		ofstream grade;
//		grade.open("data.txt", ios::app);
//		grade<<"Fail"<<endl;
//		grade<<endl;
//		grade.close();
	}
		return grade1;
}








int main()
{
	double average;
	char grade_temp;
	student s[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Ente the Name of student"<<endl;
		cin>>s[i].name;
		cout<<"Enter the id of student"<<endl;
		cin>>s[i].id;
		cout<<"Enter the marks of quiz 1"<<endl;
		cin>>s[i].q1;
		cout<<"Enter the marks of quiz 2"<<endl;
		cin>>s[i].q2;
		cout<<"Enter the marks of assignment1"<<endl;
		cin>>s[i].a1;
		cout<<"Enter the marks of assignment 2"<<endl;
		cin>>s[i].a2;
		cout<<"Enter the mid marks"<<endl;
		cin>>s[i].mid;
		cout<<"Enter the final marks"<<endl;
		cin>>s[i].final;
		average=cal_marks(s[i].q1, s[i].q2, s[i].a1, s[i].a2, s[i].mid, s[i].final);
		grade_temp=grade(average);
		ofstream data;
		data.open("data.txt", ios::app);
		data<<"Name "<<s[i].name<<endl;
		data<<"Id "<<s[i].id<<endl;
		data<<"Quiz 1 "<<s[i].q1<<endl;
		data<<"Quiz 2 "<<s[i].q2<<endl;
		data<<"Assignment 1"<<s[i].a1<<endl;
		data<<"Assignment 1"<<s[i].a2<<endl;
		data<<"Mid "<<s[i].mid<<endl;
		data<<"Final "<<s[i].final<<endl;
		data<<"Average is "<<average<<endl;
		data<<"Grade is "<<grade_temp<<endl;
		data.close();
		
	}
	
}
