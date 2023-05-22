#include<iostream>
using namespace std;

struct BinNum
{
	char str[100];
};
typedef struct BinNum BN;

class math_cmd
{
	public:
		void add (int num1,int num2);
		void add (char arr[],char brr[]);
		void add (BN n1,BN n2);
};

inline int max_1 (int a,int b)
{
	return (a>=b)?a:b;
}

void math_cmd::add (int num1,int num2)
{
	cout<<num1+num2<<",";
};

void math_cmd::add(char arr[],char brr[])
{
	char crr[200];
	int record1=0;
	for(int i=0;i<100;i++)
	{
		if(arr[i]!='\0')record1++;
		else break;
	}
	for(int i=0;i<100;i++)
	{
		crr[i]=arr[i];
	}
	for(int i=record1,j=0;i<200,j<100;i++,j++)
	{
		crr[i]=brr[j];
	}
	cout<<crr<<","; 
}

void math_cmd::add(BN n1,BN n2)
{
	char arr[100],brr[100];
	int record1=0,record2=0;
	for(int i=0;i<100;i++)
	{
		if(n1.str[i]!='\0')record1++;
		else break;
	}
	for(int i=0;i<100;i++)
	{
		if(n2.str[i]!='\0')record2++;
		else break;
	}
	for(int i=0,j=record1-1;i<record1,j>=0;i++,j--)
	{
		arr[j]=n1.str[i];
	}
	for(int i=0,j=record2-1;i<record2,j>=0;i++,j--)
	{
		brr[j]=n2.str[i];
	}
	char crr[max_1(record1,record2)+1];
	for(int i=0;i<max_1(record1,record2)+1;i++)
	{
		crr[i]='0';
	}
	for(int i=0,j=max_1(record1,record2)-1;i<max_1(record1,record2),j>=0;i++,j--)
	{
		if((arr[i]=='0')&&(brr[i]=='0'))crr[j]+=0;
		else if((arr[i]=='0')&&(brr[i]=='1'))
		{
			if(crr[j]==0)crr[j]+=1;
			else 
			{
				crr[j]='0';
				crr[j-1]='1';
			}
		}
		else if((brr[i]=='0')&&(arr[i]=='1'))
		{
			if(crr[j]==0)crr[j]+=1;
			else 
			{
				crr[j]='0';
				crr[j-1]='1';
			}
		}
		else 
		{
			if(crr[j]==0)
			{
				crr[j]='0';
				crr[j-1]++;
			}
			else
			{
				crr[j]='0';
				crr[j-1]++;
			}
		}
	}
	cout<<crr;
}

int main()
{
	int a,b;
	char arr[100],brr[100];
	BN n1,n2;
	cin>>a>>b;
	cin>>arr>>brr;
	cin>>n1.str>>n2.str;
	
	class math_cmd person;
	person.add(a,b);
	person.add(arr,brr);
	person.add(n1,n2);
	return 0;
}
