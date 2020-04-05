#pragma once
#include <string>
#include "Auto.h"

using namespace std;

class LKW : public Auto {
private:
	double Gesamtgewicht, Bezeichnung;
public:
	LKW(int, string, string, double, double);

	void load(double x);

	void unload(double x);

	~LKW();
};

