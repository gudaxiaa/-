#include <iostream>
#include <Windows.h>

using namespace std;

int main(void)
{
	char x;
	cout << "请输入一个字母:";
	cin >> x;

	if(x >= 'a' && x <= 'z')
	{
		x = x - 'a' + 'A';
	}else if(x >= 'A' && x <= 'Z')
	{
		x = x - 'A' + 'a';
	}else
	{
		cout << "输入非法字符" << endl;
	}
	cout << x << endl;

	system("pause");
	return 0;
}