#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	cout << "Enter text for analysis , and type @ "
		"to terminate input.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punch = 0;
	int others = 0;
	//cin.get(ch);
	while (cin.get(ch))
	{
		if (isalpha(ch))//�ǲ���һ����ĸ
			chars++;
		else if (isspace(ch))//�ǲ��ǿհ��ַ�
			whitespace++;
		else if (isdigit(ch))//�ǲ�������
			digits++;
		else if (ispunct(ch))//�ǲ��Ǳ��
			punch++;
		else
			others++;
		//cin.get(ch);
	}
	cout << chars << " letters,"
		<< whitespace << " white space,"
		<< digits << " digits,"
		<< punch << " punchation,"
		<< others << " others.\n";
}