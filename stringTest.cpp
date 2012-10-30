
#include <iostream>
#include <string>
#include "Uppercase.h"
using namespace std;

class MyString{

public:
	MyString();
	MyString(const string& str);
	void getNewString(const string str);
	string getFinalStr();

private:
	Uppercase *mStrUpper;
	string mStr;
};

// �޲ι���
MyString::MyString()
{
	mStr = "MyStringClass";
	cout<<"Default string : "<<mStr<<endl;
}

// �вι���
MyString::MyString(const string& str)
{
	mStr = str;
	cout<<"Default string : "<<mStr<<endl;
}

// ��ȡ����λ�ַ���
void MyString::getNewString(string str)
{
	string newStr;
	for (int i=0;i<str.length(); i++ )
	{
		if ((i%2))
		{
			newStr += str[i];				// ��������λ���ַ���
		}
	}
	
	cout<<"My string : "<<newStr<<endl;

	mStrUpper = new Uppercase();			
	mStr = mStrUpper->strUppercase( newStr );// ת���ɴ�д

}

string MyString::getFinalStr()
{
	if (mStr.length() != 0)
	{
		return mStr;
	}
	else
		return "NULL";

}

void main()
{
	MyString mstr;
	string str;
	cout<<"Please input your string : ";
	cin>>str;

	mstr.getNewString( str );
	cout<<"Final string : "<<mstr.getFinalStr()<<endl;
}