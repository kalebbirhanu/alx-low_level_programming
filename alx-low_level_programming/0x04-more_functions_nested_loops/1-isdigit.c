#include "main.h"

int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
