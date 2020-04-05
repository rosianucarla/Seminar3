#include "Auto.h"


Auto::Auto() {
	Id = -1;
	Marke = "";
	Modell = "";
}

Auto::Auto(int id, string marke, string modell) {
	Id = id;
	Marke = marke;
	Modell = modell;
}

Auto::~Auto() {}