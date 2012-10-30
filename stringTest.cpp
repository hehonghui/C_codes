
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

// 无参构造
MyString::MyString()
{
	mStr = "MyStringClass";
	cout<<"Default string : "<<mStr<<endl;
}

// 有参构造
MyString::MyString(const string& str)
{
	mStr = str;
	cout<<"Default string : "<<mStr<<endl;
}

// 截取奇数位字符串
void MyString::getNewString(string str)
{
	string newStr;
	for (int i=0;i<str.length(); i++ )
	{
		if ((i%2))
		{
			newStr += str[i];				// 保存奇数位的字符串
		}
	}
	
	cout<<"My string : "<<newStr<<endl;

	mStrUpper = new Uppercase();			
	mStr = mStrUpper->strUppercase( newStr );// 转换成大写

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