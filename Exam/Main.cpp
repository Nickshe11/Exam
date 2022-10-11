#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*int mark = 256;
	while ((mark))
	{
		cout << (char)(256 - mark) << '\t';
		mark--;
	}*/
	/*int i = 0;
	while (256 - i)
	{
		cout << (char)(i) << '\t';
		i++;
	}*/
	unsigned char i {};
	while (i-255)
	{
		cout << i << '\t';
		i++;
	}
}