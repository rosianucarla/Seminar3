#pragma once
#include <string>

using namespace std;

class Kunde {
private:
	int Id;
	string Name;
public:
	Kunde(int, string);

	int get_id() { return Id; }
	string get_name() { return Name; }

	void set_id(int id) { Id = id; }
	void set_name(string name) { Name = name; }

	~Kunde();
};

