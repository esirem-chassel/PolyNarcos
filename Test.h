#pragma once
#include <ostream>
#include "Patient.h"

class Test {
private:
	Patient* patient;
	int pulse;
	int o2;
	std::string date;
public:
	Test(Patient* patient, std::string date);
	Patient* getPatient() const;
	std::string getDate() const;
	int getPulse() const;
	int getO2() const;
	void setPulse(int pulse);
	void setO2(int o2);
	friend std::ostream& operator<<(std::ostream& os, const Test& t);
};
