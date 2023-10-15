#pragma once
#include "Aves.h"

class Tucan : public Aves {
private:
	string colorPico;
	string tipoPico;
public:
	Tucan(char[], char[], int, char[], char[], char[], char[], bool, char[], char[], char[], char[]);
	~Tucan();

	void picotear();
};
