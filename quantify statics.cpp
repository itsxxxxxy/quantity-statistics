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
		if (isalpha(ch))//是不是一个字母
			chars++;
		else if (isspace(ch))//是不是空白字符
			whitespace++;
		else if (isdigit(ch))//是不是数字
			digits++;
		else if (ispunct(ch))//是不是标点
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