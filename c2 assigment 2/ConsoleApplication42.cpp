#include <iostream>
using namespace std;


void _convert_all_uppercase(char* p)
{
	for (; *p != NULL; p++)
	{
		if (*p >= 97 && *p <= 122) {
			*p = *p - 32;
			cout << *p;
		}
		else {
			cout << *p;
		}
	}
}


void _convert_first_word_capital(char* p) {
	int i = 0;
	if (i == 0) {
		if (*p >= 97 && *p <= 122) {
			*p = *p - 32;
			cout << *p;
			p++;
		}
		else {
			cout << *p;
			p++;
		}
		i++;
	}


	for (; *p != '\0'; p++)
	{
		if (*p == ' ')
		{
			cout << *p;
			p++;
			if (*p != '\0') {
				if (*p >= 97 && *p <= 122) {
					*p = *p - 32;
					cout << *p;

				}
				else {
					cout << *p;

				}

			}
		}

		else {
			cout << *p;
		}
	}

}



void _find_point(char* p) {
	for (; *p != '\0'; p++)
	{
		if (*p == '.')
		{
			cout << *p;
			p++;
			if (*p == ' ')
			{
				cout << *p;
				p++;
				if (*p != '\0') {
					if (*p >= 97 && *p <= 122) {
						*p = *p - 32;
						cout << *p;

					}
					else {
						cout << *p;

					}

				}
			}
			else {
				if (*p >= 97 && *p <= 122) {
					*p = *p - 32;
					cout << *p;

				}
				else {
					cout << *p;

				}
			}

		}
		else {
			cout << *p;
		}

	}
}

void _replaceIsByWasWord(char *p) {
	while (*p != '\0') {
		if ((*p) == 'i' && (*(p + 1) != '\0') &&*(p + 1) == 's') {
			p++;
			cout << "was";
		}
		else
			cout << *p;
		p++;
	}
	cout << "\n";
}



int main()
{
	cout << "Enter any character from this menu : \n";
	cout << "c : change all letter in upper case.\n";
	cout << "w : change first character of each word in upper case.\n";
	cout << "s : change first character of each sentence in upper case.\n";
	cout << "d : replace 'is' word by 'was' word in the paragraph. \n";
	cout << "0 : to exit the program.\n";
	char s[100];
	cout << "Enter any string :" << endl;
	gets_s(s, 100);
	
	cout << "Input character c/w/s/d :" << endl;
	char choise;
	
	cin >> choise;
	switch (choise) {
	case 'c':

		_convert_all_uppercase(s);
		break;
	case 'w':
		_convert_first_word_capital(s);
		break;
	case 's':
		_find_point(s);

		break;
	case 'd':
		_replaceIsByWasWord(s);
		break;
	case '0': 
		return 0;
		break;
	default:
		cout << "Invalid choise" << endl;
	}


	return 0;
}
