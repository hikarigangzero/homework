#include<iostream>
#include<cstring.h>
using namespace std;

class mail
{
	public:
		void check(char arr[]);
};

void mail::check(char arr[])
{
	int a1=0,a2=0,a3=0,b=0,d=0;
	int e=strlen(arr);
	for(int i=0;i<21;i++)
	{
		if(((arr[i]>=48)&&(arr[i]<=57))||((arr[i]>=65)&&(arr[i]<=90))||((arr[i]>=97)&&(arr[i]<=122))||(arr[i]==95))a1++;
		else if(arr[i]=='@')
		{
			d++;
			break;
		}
		else 
		{
			b++;
			cout<<"@֮ǰ�����˷Ƿ��ַ���"<<endl;
			break;
		}
		if(a1>20)
		{
			b++;
			cout<<"@ǰ���ȹ�����"<<endl;
			break;
		}
	}
	if(b==0)
	{
		for(int i=a1+1;i<63;i++)
		{
			if(((arr[i]>=48)&&(arr[i]<=57))||((arr[i]>=65)&&(arr[i]<=90))||((arr[i]>=97)&&(arr[i]<=122))||(arr[i]==95))a2++;
			else if(arr[i]=='.')
			{
				d++;
				break;
			}
			else
			{
				b++;
				cout<<"@֮�������˷Ƿ��ַ���"<<endl;
				break; 
			}
			if(a2>20)
			{
				b++;
				cout<<"@�󳤶ȹ�����"<<endl;
				break;
			}
		}
	}
	if(b==0)
	{
		int c=0;
		for(int i=a1+a2+2;i<63;i++)
		{
			if(((arr[i]>=48)&&(arr[i]<=57))||((arr[i]>=65)&&(arr[i]<=90))||((arr[i]>=97)&&(arr[i]<=122))||(arr[i]=='_')||(arr[i]=='.'))a3++;
			else
			{
				b++;
				cout<<"@֮�������˷Ƿ��ַ���"<<endl;
				break; 
			}
			if(a3>20)
			{
				b++;
				cout<<"@�󳤶ȹ�����"<<endl;
				break;
			}
			if(arr[i]=='.')c++;
			if(c>2)
			{
				b++;
				cout<<"��.����Ŀ���࣡"<<endl;
			}
			if((a1+a2+a3+2)==e)
			{
				d++;
				break;
			}
		}
	}
	if(d==3)cout<<"��ʽ��ȷ"<<endl; 
}

int main()
{
	char arr[63];
	cin>>arr;
	class mail peop;
	peop.check(arr);
	return 0;
}















