#include<iostream>
#include<iomanip>
using namespace std;

class stud
{
	public:
		char name[10];
		double sorce;
		
		void print_under(class stud arr[],int a);
		void pj_check(class stud arr[],int a);
		void recording(class stud arr[],int a);
};

void stud::print_under(class stud arr[],int a)
{
	int record1=0;
	cout<<"不及格名单："<<endl; 
	for(int i=0;i<a;i++)
	{
		if(arr[i].sorce<60)
		{
			cout<<setw(10)<<arr[i].name<<" "<<setprecision(5)<<arr[i].sorce<<endl;
			record1++;
		}
	}
	cout<<"不及格总人数："<<record1<<endl; 
}

void stud::pj_check(class stud arr[],int a)
{
	double num1=0,num2=0;
	int record1=0;
	for(int i=0;i<a;i++)
	{
		num1+=arr[i].sorce;
	}
	num2=num1/a;
	for(int i=0;i<a;i++)
	{
		if(arr[i].sorce>num2)
		{
			cout<<left<<setw(10)<<arr[i].name<<" "<<setprecision(5)<<arr[i].sorce<<endl;
			record1++;
		}
	}
	cout<<"总共"<<record1<<"人在平均分以上"<<endl; 
}

void stud::recording(class stud arr[],int a)
{
	int brr[6]={0,0,0,0,0,0};
	for(int i=0;i<a;i++)
	{
		if(arr[i].sorce<60)brr[0]++;
		if((arr[i].sorce>=60)&&(arr[i].sorce<70))brr[1]++;
		if((arr[i].sorce>=70)&&(arr[i].sorce<80))brr[2]++;
		if((arr[i].sorce>=80)&&(arr[i].sorce<90))brr[3]++;
		if((arr[i].sorce>=90)&&(arr[i].sorce<100))brr[4]++;
		if(arr[i].sorce==100)brr[5]++;
	}
	for(int i=0;i<6;i++)
	{
		cout<<"第"<<i+1<<"段有"<<brr[i]<<"人"<<endl; 
	}
}

int main()
{
	class stud arr[10];
	class stud teacher;
	int a=0;//a用来表示数组长度 
	for(int i=0;i<10;i++)
	{
		cin>>arr[i].name>>arr[i].sorce;
		if(arr[i].sorce<0)
		{
			a=i;
			break;
		}
	}
	teacher.print_under(arr,a);
	cout<<endl;
	teacher.pj_check(arr,a);
	cout<<endl;
	teacher.recording(arr,a);
	return 0;
}
