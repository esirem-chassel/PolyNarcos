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
	Patient* p = this->findPatient(numSecu);
	if (p == nullptr) {
		this->patients.push_back(Patient(numSecu, fullName, dateBirth));
	} else {
		throw std::invalid_argument("Patient '" + numSecu + "' already exists !");
	}
};

Patient* Clinic::findPatient(std::string numSecu) {
	Patient* p = nullptr;
	int i = 0;
	for (Patient p2 : this->patients) {
		if (p2.getNumSecu() == numSecu) {
			p = &(*(this->patients.begin() + i));
		}
		i++;
	}
	return p;
};

void Clinic::addTest(const Test& test) {
	this->tests.push_back(test);
};

std::ostream& operator<<(std::ostream& os, const Clinic& c) {
	os << "Tests : " << std::endl;
	for (const Test& t : c.getTests()) {
		os << t << std::endl;
	}
	os << "Patiens : " << std::endl;
	for (const Patient& p : c.getPatients()) {
		os << p << std::endl;
	}
	return os;
};
