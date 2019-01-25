#include"ICommand.h"

using namespace std;

Debug::Debug(vector<string>& expressions, float& w, float& x, float& y, float& z, int& control)
	: exp(expressions), W(w), X(x), Y(y), Z(z), cont(control)
{
}

void Debug::execute()
{
	if(cont < exp.size())
	{
		string a, b, c, d, e;
		float *avar, *cvar, *evar; 
		float tempc, tempe;
		int charptr = 0, opptr = 0;

		string thisLine = exp[cont];
		istringstream ss(thisLine);
		ss >> a >> b >> c >> d >> e;

		if(b == "=")
		{
			if(a == "w")
			{
				avar = &W;
			}
			if(a == "x")
			{
				avar = &X;
			}
			if(a == "y")
			{
				avar = &Y;
			}
			if(a == "z")
			{
				avar = &Z;
			}

			if(c == "w")
			{
				cvar = &W;
			}
			if(c == "x")
			{
				cvar = &X;
			}
			if(c == "y")
			{
				cvar = &Y;
			}
			if(c == "z")
			{
				cvar = &Z;
			}
			if(c[0] >= 48 && c[0] <= 57){
				tempc  = stof(c);
				cvar = &tempc;
			}


			if(e == "w")
			{
				evar = &W;
			}
			if(e == "x")
			{
				evar = &X;
			}
			if(e == "y")
			{
				evar = &Y;
			}
			if(e == "z")
			{
				evar = &Z;
			}if(e[0] >= 48 && e[0] <= 57){
				tempe = stof(e);
				evar = &tempe;
			}

			if(d == "+")
			{
				*avar = *cvar + *evar;
			}
			if(d == "-")
			{
				*avar = *cvar - *evar;
			}
			if(d == "*")
			{
				*avar = (*cvar)*(*evar);
			}
			if(d == "/")
			{
				*avar = (*cvar)/(*evar);
			}
			if(d == "**")
			{
				*avar = pow((*cvar), (*evar));
			}if(d != "+" && d != "-" && d != "*" && d != "/" && d != "**" && c[0] >= 48 && c[0] <= 57){
				*avar = tempc;
			}
			if(d != "+" && d != "-" && d != "*" && d != "/" && d != "**" && (c == "w" || c == "x" || c == "y" || c == "z"))
			{
				*avar = *cvar;
			}
		}
			
		if(b == "?")
		{
			if(a == "w")
			{
				avar = &W;
			}
			if(a == "x")
			{
				avar = &X;
			}
			if(a == "y")
			{
				avar = &Y;
			}
			if(a == "z")
			{
				avar = &Z;
			}

			float temp1 = *avar;
			if(temp1 != 0){
				float tempint = stof(c);
				cont = tempint-2;
			}
			
		}

		cont++;
	}else{
		cout << endl << "No more expressions!!" << endl;
	}
	cout << endl << "Registers : " << endl;
	cout << "\tw = " << W << endl << "\tx = " << X << endl << "\ty = " << Y << endl << "\tz = " << Z << endl << endl;


}