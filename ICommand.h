#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<math.h>
using namespace std;

class ICommand
{ 
	public:
		virtual void execute() = 0;
};

class Input : public ICommand
{
	protected:
		vector<string>& exp;
		int &cont;
	public:
		void readFile();
		void displayFile();
		Input(vector<string>& expressions, int& control);
		void execute();
};

class Debug : public ICommand
{
	protected:
		vector<string>& exp;
		float &W, &X, &Y, &Z;
		int &cont;
	public:
		Debug(vector<string>& expressions, float& w, float& x, float& y, float& z, int& control);
		void execute();
};

class Run : public ICommand
{
	protected:
		vector<string>& exp;
		float &W, &X, &Y, &Z;
		int &cont;
	public:
		Run(vector<string>& expressions, float& w, float& x, float& y, float& z, int& control);
		void execute();
};

class Continue : public ICommand
{
	protected:
		vector<string> exp;
		float &W, &X, &Y, &Z;
		int &cont;

	public:
		Continue(vector<string>& expressions, float& w, float& x, float& y, float& z, int& control);
		void execute();
};

class Print : public ICommand
{
	protected:
		vector<string>& exp;
		float &W, &X, &Y, &Z;

	public:
		Print(vector<string>& expressions, float& w, float& x, float& y, float& z);
		void execute();
};

