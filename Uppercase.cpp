#include "Uppercase.h"

// ���ַ����е��ַ�ת��Ϊ��д��ĸ
string Uppercase::strUppercase(string str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32; 
			
		}
		
		i++;
	}

	return str;
}