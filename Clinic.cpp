#include "Clinic.h"

Clinic::Clinic() : tests({}), patients({}) {
	
}

std::vector<Test> Clinic::getTests() const {
	return this->tests;
};

std::vector<Patient> Clinic::getPatients() const {
	return this->patients;
};

void Clinic::createPatient(std::string numSecu, std::string fullName, std::string dateBirth) {
	// @TODO : vérif unicité
	this->patients.push_back(Patient(numSecu, fullName, dateBirth));
};

Patient* findPatient(std::string numSeco) {
	return nullptr;
};

void Clinic::addTest(const Test& test) {
	this->tests.push_back(test);
};

std::ostream& operator<<(std::ostream& os, const Clinic& c) {

	return os;
};
