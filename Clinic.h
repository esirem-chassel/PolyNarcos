#pragma once
#include <vector>
#include <ostream>
#include "Test.h"
#include "Patient.h"

class Clinic {
private:
	std::vector<Test> tests;
	std::vector<Patient> patients;
public:
	Clinic();
	std::vector<Test> getTests() const;
	std::vector<Patient> getPatients() const;
	void createPatient(std::string numSecu, std::string fullName, std::string dateBirth);
	Patient* findPatient(std::string numSecu);
	void addTest(const Test& test);
	friend std::ostream& operator<<(std::ostream& os, const Clinic& c);
};
