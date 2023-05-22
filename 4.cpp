#include<iostream>
using namespace std;

class about_char
{
	public:
		char * dele_char(char *str, char *chars);
};

char * about_char::dele_char(char *str, char *chars)
{
	int record1=0,record2=0;
	int a_cmd=0,b_cmd=0;
	for(int i=0;i<100;i++)
	{
		if(*(str+i)!='\0')record1++;
		else break;
	}
	for(int i=0;i<100;i++)
	{
		if(*(chars+i)!='\0')record2++;
		else break;
	}
	char *p;
	p=new char [record1+1];
	for(int i=0;i<record1;i++)
	{
		a_cmd=0;
		for(int j=0;j<record2;j++)
		{
			if(*(str+i)==*(chars+j))a_cmd++;
		}
		if(a_cmd==0)
		{
			*(p+b_cmd)=*(str+i);
			b_cmd++;
		}
	}
	*(p+b_cmd)='\0';
	return p;
	delete [] p;
}

int main()
{
	char *str,*chars;
	str=new char[100];
	chars=new char[100];
	cin>>str>>chars;
	about_char n1;
	cout<<n1.dele_char(str,chars);
	return 0;
}
