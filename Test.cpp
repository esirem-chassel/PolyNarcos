#include "Test.h"

Test::Test(Patient* patient, std::string date): pulse(0), o2(0), patient(patient), date(date)
{
}

Patient* Test::getPatient() const
{
	return this->patient;
}

std::string Test::getDate() const
{
	return this->date;
}

int Test::getPulse() const
{
	return this->pulse;
}

int Test::getO2() const
{
	return this->o2;
}

void Test::setPulse(int pulse)
{
	this->pulse = pulse;
}

void Test::setO2(int o2)
{
	this->o2 = o2;
}

std::ostream& operator<<(std::ostream& os, const Test& t) {
	os << "Patient " << (*t.getPatient()) << " at " << t.getDate() << " | Pulse=" << t.getPulse() << " | o2=" << t.getO2();
	return os;
};
