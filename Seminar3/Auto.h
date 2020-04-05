#pragma once
#include <cstring>
#include <string>

using namespace std;

class Auto {
private:
	int Id;
	string Marke, Modell;
public:

	Auto();
	Auto(int id, string merke, string modell);

	int get_id() { return Id; }
	string get_merke() { return Marke; }
	string get_modell() { return Modell; }

	void set_id(int id) { Id = id; }
	void set_marke(string marke) { Marke = marke; }
	void set_model(string modell) { Modell = modell; }

	~Auto();
};

