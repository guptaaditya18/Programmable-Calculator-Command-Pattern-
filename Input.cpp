#include"ICommand.h"

using namespace std;


Input::Input(vector<string>& expressions, int& control)
	: exp(expressions), cont(control)
{
	cont = 0;
}

void Input::readFile()
{
	string filename, line;

	exp.clear();
	cin.ignore();
	getline(cin, filename);
	ifstream myfile(filename.c_str());

	if(!myfile)
	{
		cout << "Could not find file with name " << filename << endl;
	}else{
		while(getline(myfile, line)){
			exp.push_back(line);
		}
	}
}

void Input::displayFile(){
	cout << "Expressions : " << endl;
	for (int i = 0; i < exp.size(); ++i)
	{
		cout << "\t" << i+1 << ": " << exp[i] << endl;
	}
}

void Input::execute()
{
	readFile();
	displayFile();
}