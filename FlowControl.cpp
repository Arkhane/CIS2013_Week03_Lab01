#include <iostream>
using namespace std;

int main() 
{
	char continueProgram = 'y';

	do 
	{
		cout << "Do you want to continue (y/n)";
		cin >> continueProgram;

		switch (continueProgram)
		{
		case 'y':
			cout << "Going to Continue";
			break;
		case 'n':
			cout << "Going to Exit";
			break;
		default:
			continueProgram = 'y';

		}
		
	} while (continueProgram == 'y');
	
	return 0;
	
}