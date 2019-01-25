#include"ICommand.h"
using namespace std;

vector<string> expressions;
char cmd = '0';
float x = 0.0, y = 0.0, z = 0.0, w = 0.0;
int control = 0;

int main()
{
	ICommand* icommand;
	while(cmd != 'q')
	{

		cout << "Choose a command (i, d, r, c, p, q) : ";
		cin >> cmd;

		switch(cmd){
			case 'i': icommand = new Input(expressions, control);
				break;
			case 'd': icommand = new Debug(expressions, w, x, y, z, control);
				break;
			case 'r': icommand = new Run(expressions, w, x, y, z, control);
				break;
			case 'c': icommand = new Continue(expressions, w, x, y, z, control);
				break;
			case 'p': icommand = new Print(expressions, w, x, y, z);
				break;
			case 'q': icommand = NULL;
				cout << "You chose to exit!";
				break;
			default: icommand = NULL;
				break;
		}

		if(icommand != NULL)
			icommand->execute();
	}

}


