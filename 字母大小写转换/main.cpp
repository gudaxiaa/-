#include <iostream>
#include <Windows.h>

using namespace std;

int main(void)
{
	char x;
	cout << "������һ����ĸ:";
	cin >> x;

	if(x >= 'a' && x <= 'z')
	{
		x = x - 'a' + 'A';
	}else if(x >= 'A' && x <= 'Z')
	{
		x = x - 'A' + 'a';
	}else
	{
		cout << "����Ƿ��ַ�" << endl;
	}
	cout << x << endl;

	system("pause");
	return 0;
}