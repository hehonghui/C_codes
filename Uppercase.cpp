#include "Uppercase.h"

// ÔÚ×Ö·û´®ÖĞµÄ×Ö·û×ª»¯Îª´óĞ´×ÖÄ¸
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