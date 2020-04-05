#pragma once
#include "Auto.h"
#include <string>

using namespace std;

class PKW : public Auto {
private:
	string Sonderausstatungen;
public:
	PKW(int, string, string, string);


	~PKW();
};


