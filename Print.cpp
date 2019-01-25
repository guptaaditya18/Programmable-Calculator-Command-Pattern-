#include"ICommand.h"

using namespace std;

Print::Print(vector<string>& expressions, float& w, float& x, float& y, float& z)
	: exp(expressions), W(w), X(x), Y(y), Z(z)
{
}

void Print::execute()
{
	cout << endl << "Expressions : " << endl;
	for (int i = 0; i < exp.size(); ++i)
	{
		cout << "\t" << i+1 << ": " << exp[i] << endl;
	}
	cout << endl << "Registers : " << endl;
	cout << "\tw = " << W  << "\tx = " << X << "\ty = " << Y << "\tz = " << Z << endl << endl; 
}