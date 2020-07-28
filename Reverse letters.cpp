#include <iostream>
#include <string>
using namespace std;

string reverse_words(string str)
{
	int begin = 0;
	int end = 0;
	string changed_words;
for (int i = 0; i <= str.length(); i++)
{
	if (str.substr(i,1) == " " or i == str.length())
	{

		if (i == str.length())
		{
			end = i;
		}
		else
		{
			end = i - 1;
		}

		for (int z = end; z >= begin; z--)
		{
			changed_words = changed_words + str.substr(z, 1);
		}

		if (i != str.length())
		{
			changed_words = changed_words + " ";
			begin = i + 1;
		}
	}
}
return  changed_words;
}

int main()
{
	cout << "Enter the sentence to Reverse: ";
	string word;
	cin >> word;
	cout << reverse_words(word);
}