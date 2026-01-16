#pragma once
#include <string>
#include <ostream>

class Patient {
private:
	std::string numSecu;
	std::string fullName;
	std::string dateBirth;
public:
	Patient(std::string numSecu, std::string fullName, std::string dateBirth);
	std::string getNumSecu() const;
	std::string getFullName() const;
	std::string getDateBirth() const;
	friend std::ostream& operator<<(std::ostream& os, const Patient& p);
};
