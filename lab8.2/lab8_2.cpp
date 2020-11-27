#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

size_t MinLength(const string s)
{
	int k = 0;
	size_t len = 0, min;
	size_t start = 0, finish;
		
	while ((start = s.find_first_of("qwertyuiopasdfghjklzxcvbnm", start)) != -1)
	{
		finish = s.find_first_not_of("qwertyuiopasdfghjklzxcvbnm", start + 1);
		if (finish == -1)
			finish = s.length();
		len = finish - start;
		if (k == 0)
			min = len;
		k++;
		if (len < min)
			min = len;
		start = finish + 1;
	}
	return min;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str;

	cout << " Введіть символи(ENG): " << endl;
	getline(cin, str);

	cout << " Довжина мінімальної групи елементів(букв): " << MinLength(str) << endl;

	return 0;
}