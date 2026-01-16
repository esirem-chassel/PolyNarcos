#include "Patient.h"

Patient::Patient(std::string numSecu, std::string fullName, std::string dateBirth): numSecu(numSecu), fullName(fullName), dateBirth(dateBirth) {
	
};

std::string Patient::getNumSecu() const {
	return this->numSecu;
};

std::string Patient::getFullName() const {
	return this->fullName;
};

std::string Patient::getDateBirth() const {
	return this->dateBirth;
};
